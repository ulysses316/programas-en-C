#include <conio.h>
#include <stdio.h>

float x;
float y;
float z;

int main ()
{
	
	printf ("x=");
	scanf ("%f", &x);
	printf ("y=");
	scanf ("%f", &y);
	z=x+y;
	printf ("%.2f + %.2f = %.2f", x,y,z);
	
}
