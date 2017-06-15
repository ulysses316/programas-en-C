#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x;

main()
{
	printf("X=");
	scanf ("%f",&x);
	raizx(x);
}
raizx (double a){
double resp;
resp=pow(a,0.5);
printf ("\nLa raiz de %.0f es: %.2f",x,resp);
}
