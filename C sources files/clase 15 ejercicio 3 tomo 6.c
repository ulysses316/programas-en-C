#include <stdio.h>

float funcion,a,b,x,y,c,resp;

main()
{
	printf ("a=");
	scanf ("%f",&a);
	printf ("b=");
	scanf ("%f",&b);
	printf ("x=");
	scanf ("%f",&x);
	printf ("y=");
	scanf ("%f",&y);
	printf ("c=");
	scanf ("%f",&c);
	
	funcion1 (a,b,x,y,c);
}

funcion1 (double m, double n, double o, double p, double q){
	double resp;
	resp=2*m*n*pow(o,2)+q*o-y;
	printf("resp = %.2f ",resp);
}

