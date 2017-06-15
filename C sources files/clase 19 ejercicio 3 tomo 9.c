
#include <stdio.h>
#include <conio.h>
short i;
unsigned short hexadecimal[10];

int main()
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
