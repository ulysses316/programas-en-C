#include <stdio.h>
#include <stdlib.h>

main()
{
	char respuesta,S,N;
	do
	{
		if(toupper(respuesta)=='S'){
			promedio();
		}
		else;
		printf("\n\n%cDeseas realizar una operacion? (s/n): ",respuesta);
		respuesta=getche();
	} while (toupper(respuesta)!='N');
	printf("\n");
}
    promedio(){
    	int n,i;
    	float contador,promedio;
    	float lista[100];
    	contador=0;
    	   printf("\n\n\nA cuantos numeros les vas a sacar su promedio?: ");
    	   scanf("%d",&n);
    	     for(i=1;i<=n;i++){
    	     	printf("a%d=",i);
    	     	scanf("%f",&lista[i-1]);
    	     	contador=contador+lista[i-1];
    	     }
    	     promedio=contador/n;
    	     system("cls");
    	     printf("EL PROMEDIO DE ESTA LISTA DE NUMEROS ES: \n\n");
    	     for(i=1;i<=n;i++){
    	     	printf("a%d=%.2f\n",i,lista[i-1]);
    	     }
    	     printf("El promedio es:%.2f",promedio);
    }
    
