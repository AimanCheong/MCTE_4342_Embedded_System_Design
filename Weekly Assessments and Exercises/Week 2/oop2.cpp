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
		void setX(double value)
		{
			x = value;
		}
		void setY(double value)
		{
			y = value;
		}
		void setZ(double value)
		{
			z = value;
		}
		double getMagnitude ()
		{
			return sqrt(x*x + y*y + z*z);
		}
};

int main ()
{
	vector v1;
	vector v2;
	vector v3;
	
	v1.setX (3.5);
	v1.setY (4);
	v1.setZ (2);
	
	v2.setX (2.5);
	v2.setY (9.3);
	v2.setZ (3.4);
	
	v3.setX (7.1);
	v3.setY (5.3);
	v3.setZ (2.5);
	
	printf ("Magnitude of v1 = %f \n", v1.getMagnitude());
	printf ("Magnitude of v2 = %f \n", v2.getMagnitude());
	printf ("Magnitude of v2 = %f \n", v3.getMagnitude());
	return 0;
}
