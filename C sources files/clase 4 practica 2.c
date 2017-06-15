#include <stdio.h>
#include <stdlib.h>

float y,a,b,x,z;

main ()
{
	printf ("Hola este programa te resuelve la ecuacion\n\n");
	printf ("y=a+b+2abxz\n");
	printf ("a=");
	scanf ("%f", &a);
	printf ("b=");
	scanf ("%f", &b);
	printf ("x=");
	scanf ("%f", &x);
	printf ("z=");
	scanf ("%f", &z);
	y=a+b+2*a*b*x*z;
	printf ("y=%.2f",y);
	
}
