#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

float e,a,b,x,z,k;

main ()
{
	printf ("a=");
	scanf ("%f",&a);
	printf ("b=");
	scanf ("%f",&b);
	printf ("x=");
    scanf ("%f",&x);
	printf ("z=");
    scanf ("%f",&z);
	
	k=pow(e,pow(pow(x,0.333)+2*a*b*pow(pow(x,0.3333)+1,0.1428),0.5)/(2+pow(x*z,0.1111)));
	printf("k=%.2f", k);

}
