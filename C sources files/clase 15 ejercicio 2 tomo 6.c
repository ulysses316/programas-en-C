#include <stdio.h>
#include <math.h>

float a,b,suma;

main()
{
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf ("%f",&b);
	
	suma1(a,b);
}
suma1(double m, double n){
	double resp;
	resp=m+n;
	printf("Suma = %.2f ",resp);
}
