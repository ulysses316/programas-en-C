#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

float x,y,a,b,c;

main ()
{
	printf ("a=");
	scanf ("%f", &a);
	printf ("b=");
	scanf ("%f", &b);
	printf ("c=");
	scanf ("%f", &c);
	printf ("x=");
	scanf ("%f", &x);
	printf ("y=");
	scanf ("%f", &y);
	
	y=(pow(pow(x,2)+a*pow(x,3)+b*pow(x,4)+c*x+1,0.333))/(pow(x,0.6666)+pow(x,0.2));
	printf("y=%.2f", y);
}
