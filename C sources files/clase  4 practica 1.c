#include <stdio.h>
#include <stdlib.h>

float y,a,b,x;

main ()
{
	printf ("Hola este programa te resuelve la ecuacion\n\n");
	printf ("y=2abx\n");
	printf ("a=");
	scanf ("%f", &a);
    printf ("b=");
	scanf ("%f", &b);
	printf ("x=");
	scanf ("%f", &x); 
	y=2*a*b*x;
	printf ("y=%.2f",y);
  





}
