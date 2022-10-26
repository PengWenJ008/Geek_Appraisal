#include <stdio.h>
#include <stdlib.h>

int main() 
{
	double a = 1;
	double b ;
	double c = a - b;
	double d = 0;
	double e ;
	double h = 0.001;
	double m = 25;
	printf("   x       y   \n");
	while (c > 0.001*h&&e<m)
	{
	    b = a-a*h;
	    c = a - b;
		a = b;	
		e = d + h;
	    d = e;
	    
		printf("%lf   %lf\n", e, b);
    }
	
	return 0;
}

