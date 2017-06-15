#include <stdio.h>
#include <stdlib.h>

main()
{
	or();
}
or()
{
	int a=0;
	int b=1;
	printf("TABLA DE VALORES DE VERDAD DE LA COMPUERTA OR\n\n");
	printf("\n\n\n  %d    %d    %d",a,a,a);
	printf("\n\n\n  %d    %d    %d",a,b,a);
	printf("\n\n\n  %d    %d    %d",b,a,b);
	printf("\n\n\n  %d    %d    %d",b,b,b);
	printf("\n\n\n");
}

