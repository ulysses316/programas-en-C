#include <stdio.h>

double a[4];

main()
{
	int i;
	for(i=0;i<=4;i++){
	printf("Captura el numero: ");
	scanf("%d",&a[i]);

}
printf("El segundo dato que capturaste es: %d",a[3]);
} 
