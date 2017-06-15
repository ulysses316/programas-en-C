#include <stdio.h>

float funcion,x,y,c,resp;

main()
{
	printf ("x=");
	scanf ("%f",&x);
	printf ("y=");
	scanf ("%f",&y);
	printf ("c=");
	scanf ("%f",&c);
	
	funcion1 (x,y,c);
}
funcion1(double m, double n,double o){
	resp=(pow(m+1,0.5)-o*m*n)/(m-1);
	printf("resp = %.2f ",resp);
}
