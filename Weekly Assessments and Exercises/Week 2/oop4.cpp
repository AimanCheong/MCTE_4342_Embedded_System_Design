#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class vector
{
	private:
		double x;
		double y;
		double z;
	
	public:
		vector(double c1, double c2, double c3)
		{
			x = c1;
			y = c2;
			z = c3;
		}
		void Add(vector another )
		{
			x += another.x;
			y += another.y;
			z += another.z;
		}
		static vector Add(vector a, vector b)
		{
			double x_new = a.x + b.x;
			double y_new = a.y + b.y;
			double z_new = a.z + b.z;
			vector newvector(x_new, y_new, z_new);
			return newvector;
		}
		void Print()
		{
			printf ("x = %f y = %f z = %f \n",x,y,z);
		}	
};

int main()
{
	vector v1(3.5, 4, 2);
	vector v2(2.5, 9, 3.4);
	vector v3 = vector::Add(v1,v2);
	v3.Print();
	return 0;
}
