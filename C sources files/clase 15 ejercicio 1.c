#include <stdio.h>



float ventas,pago;		

main()
{
	printf ("Captura las ventas: ");
	scanf ("%f",&ventas);
	if(ventas<=40000){
		printf("\nPago es igual a: 15,000");
	}
	if (ventas>=40000&&ventas<100000){
		pago=15000+0.02*ventas-0.01*ventas;
		printf ("\nPago es igual a %.2f",pago);
	}
	if (ventas>=100000&&ventas<500000){
		pago=15000+0.04*ventas-0.02*ventas;
		printf ("\nPago es igual a %.2f",pago);
	}
	if (ventas>=500000&&ventas<1000000){
		pago=15000+0.07*ventas-0.03*ventas;
		printf ("\nPago es igual a %.2f",pago);
	}
	if (ventas>=1000000){
		pago=15000+0.10*ventas-0.05*ventas;
		printf ("\nPago es igual a %.2f",pago);
	}
}
