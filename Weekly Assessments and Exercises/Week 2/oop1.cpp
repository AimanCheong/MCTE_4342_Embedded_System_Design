#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class vector
{
	private:
		//No private members
		
	public:
		double x;
		double y;
		double z;
		
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
	
	v1.x = 3.5;
	v1.y = 4;
	v1.z = 2;
	
	v2.x = 2.5;
	v2.y = 9.3;
	v2.z = 3.4;
	
	v3.x = 7.1;
	v3.y = 5.3;
	v3.z = 2.5;
	
	printf ("Magnitude of v1 = %f \n", v1.getMagnitude());
	printf ("Magnitude of v2 = %f \n", v2.getMagnitude());
	printf ("Magnitude of v2 = %f \n", v3.getMagnitude());
	return 0;
}
