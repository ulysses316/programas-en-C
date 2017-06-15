#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float a,b,c,x1,x2;

main()
{
	system("color 1e");
	printf("Dame el valor de a: ");
	scanf("%f",&a);
	printf("Dame el valor de b: ");
	scanf("%f",&b);
	printf("Dame el valor de c: ");
	scanf("%f",&c);
	ecu1 (a,b,c);
	ecu2 (a,b,c);
}
ecu1(double d,double e,double f){
	double resp1;
	resp1=(-e+pow(pow(e,2)-4*a*c,0.5))/2*a;
	printf ("\n\nX1=%.2f",resp1);
}
ecu2(double d,double e,double f){
	double resp2;
	resp2=(-e-pow(pow(e,2)-4*a*c,0.5))/2*a;
	printf ("\n\nX2=-%.2f",resp2);
}

