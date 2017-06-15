#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int imc();
int tabla();

float x,y,z;
char respuesta,S,N;

main()
{
  printf("­Hola!");
  printf("Vamos a calcular tu indice de masa muscular (IMC) ");
  printf("Estas listo?  S/N: ");
  respuesta=getch();

    do{
      if(toupper(respuesta)=='S'){
				  printf("­Vale, emepecemos!");
				  imc();
				 }
      else
      printf("Deseas repetir?: "); 
      respuesta=getche();
      }
      while (toupper(respuesta)!='N');
      printf("­­­Gracias, vuelve pronto!!!");


}


int imc()
{
  printf("Dime cuanto pesas: ");
  scanf("%f",&x);
  printf("Recuerda poner el punto decimal en la estatura, ejem. 1.65");
  printf("Dime cuanto mides: ");
  scanf("%f",&y);
  z=x/pow(y,2);
  printf("Tu estatura es %.2f tu peso es %.2f y tu IMC es: %.2f",y,x,z);  
  tabla ();
} 


int tabla()
{

    printf("===============================================");
    printf("=    IMC    =        CLASIFICACION            =");
    printf("=           =                                 =");
    printf("=   - 18    =                                 =");
    printf("=           =                                 =");
    printf("=   18-24.9 =                                 =");
    printf("=           =                                 =");
    printf("=   25-26.9 =                                 =");
    printf("=           =                                 =");
    printf("=   + 27    =                                 =");
    printf("=           =                                 =");
    printf("=   27-29.9 =                                 =");
    printf("=           =                                 =");
    printf("=   30-39.9 =                                 =");
    printf("=           =                                 =");
    printf("=    + 40   =                                 =");
    printf("===============================================");
}  
   
	 






