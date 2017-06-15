#include <stdio.h>
#include <windows.h>

float pant,pact,c;
int i,generacion;

main()
{
	system ("color 1e");
	pant=0.167;
	printf("Generaciones: ");
	scanf ("%d", &generacion);
	for (i=1;i<=generacion;i++){
		pact=1.999*pant*(1-pant);
		pant=1.999*pact*(1-pact);
		
		printf ("Generacion %d = %.2f \n",i, pact);

	}
}
