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
		double getMagnitude ()
		{
			return sqrt(x*x + y*y + z*z);
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
	v1.Add(v2);
	v1.Print();
	return 0;
}
