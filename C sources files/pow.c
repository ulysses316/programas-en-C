#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

float x,y;

main ()
{
	printf ("x=");
	scanf ("%f", &x);
	y=pow(x,3);
	printf ("El cuadrado de %.2f es: %.2f ",x,y);
	
	
}
