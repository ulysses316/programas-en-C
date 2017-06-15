#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//funcion OR
int func_or()
{
	int a=0;
	  int b=1;
	  char resultado;
	  printf("TABLA DE VALORES DE VERDAD DE LA COMPUERTA OR\n\n");
	  printf("\n\n\n %d    %d    %d",a,a,a ||a);
	  printf("\n\n\n %d    %d    %d",a,b,a ||b);
	  printf("\n\n\n %d    %d    %d",b,a,b ||a);
	  printf("\n\n\n %d    %d    %d",b,b,b ||b);
	  printf("\n\n");
	  
}

//funcion AND
int func_and()
{
      int a=0;
	  int b=1;
	  char resultado;
	  printf("TABLA DE VALORES DE VERDAD DE LA COMPUERTA OR\n\n");
	  printf("\n\n\n %d    %d    %d",a,a,a &&a);
	  printf("\n\n\n %d    %d    %d",a,b,a &&b);
	  printf("\n\n\n %d    %d    %d",b,a,b &&a);
	  printf("\n\n\n %d    %d    %d",b,b,b &&b);
	  printf("\n\n");
}

//Funcion NOT
int not() 
{    
     int a=0;
     int b=1;     
     printf("\n");
	 printf("0 not %d\n\n",!a);
     printf("1 not %d\n\n",!b);
}   
   
   
//funcion HEX
int hexaa()
{
	int numero=0;
	int hexadecimales(int);
	
	printf("Teclee el numero entero: ");
	scanf("%u",&numero);
	printf("\n**************************\n");
	
	hexadecimales(numero);

}
int hexadecimales (int numero)
{
	i=0;
	while (numero!=0){
		hexadecimal[i]=numero%16;
		numero=numero/16;
		i++;
	}
	printf("\nhexadecimal: ");
	i--;
	while(i>=0){
		switch(hexadecimal[i]){
			case 10:
				printf("A");
			break;
			case 11:
				printf("B");
			break;
			case 12:
				printf("C");
			break;
			case 13:
				printf("D");
			break;
			case 14:
				printf("E");
			break;
			case 15:
				printf("F");
			break;
			default:
				printf("%d",hexadecimal[i]);
			break;
		}
		i--;
	}
}





int menu1()
{
	int opc;
	printf("\n\n==============================COMPUERTAS Q LOGICAS==============================\n\n");
	printf("1.-AND\n\n");
	printf("2.-OR\n\n");
	printf("3.-NOT\n\n");
	printf("\n\nCONTEOS:\n\n");
	
	printf("4.-BINARIO\n\n"); 
	printf("5.-OCTAL\n\n");
	printf("6.-HEXADECIMAL\n\n");
	  printf("\n\nSelecciona una opcion: \n\n");
	  scanf("%d",&opc);
	  
	  switch(opc){
	  	case 1: 
	  	    func_and();
	  	break;
	  	case 2:
	  		func_or();
	  	break;
	  	case 3:
	  		not();
	  	break;
	  	
		case 6:
			hexaa()
		break;
	  	
	  }
}
main()
{
	char respuesta,S,N;
	do{
		if(toupper(respuesta)=='S'){
			menu1();
		}
		else;
		printf("%cDeseas realizar una operacion? (S / N): ",respuesta);
		respuesta=getche();
	} while (toupper(respuesta)!='N');
	printf("\n");
	system ("pause");
}
