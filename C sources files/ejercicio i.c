#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

float k,a,b,c,x;

main()
{
	printf ("a=");
	scanf ("%f",&a);
	printf ("b=");
	scanf ("%f",&b);
	printf ("c=");
    scanf ("%f",&c);
	printf ("x=");
    scanf ("%f",&x);
    
    k=x*pow(a*c*pow(x,7)+pow(a,2)*pow(x,3+2*a*b*pow(x,2)+x+1)/x+a+b+1,5);
    printf("k=%.2f", k);
}
