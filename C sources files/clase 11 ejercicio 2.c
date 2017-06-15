#include <stdio.h>
#include <windows.h>

int edad;
int fumas;
char nombre[30];
int tomas;
int drogas;
int ejercicio;


main ()
{
	system ("color 1e");
	printf ("Dame tu nombre: ");
	scanf ("%s",&nombre);
	printf ("\nDame tu edad: ");
	scanf ("%d",&edad);
	printf ("\nFumas (si(1) o no(0)) ");
	scanf ("%s",&fumas);
	if (fumas=1){
		edad=edad+7;
		printf ("\nTu edad es %d ",edad);
	}
	else{
		printf ("\nTu edad es %d ",edad);
	}
	printf ("\n\nTomas (si(1) o no(0)) ");
	scanf ("%s",&tomas);
	if (tomas=1){
		edad=edad+7;
		printf ("\nTu edad es %d ",edad);
	}
	else{
		printf ("\nTu edad es %d ",edad);
	}
	printf ("\n\nTe drogas (si(1) o no(0)) ");
	scanf ("%s",&drogas);
	if (drogas=1){
		edad=edad+7;
		printf ("\nTu edad es %d ",edad);
	}
	else{
		printf ("\nTu edad es %d ",edad);
	}
	printf ("\n\nHaces ejercicio: (si(1) o no(0)) ");
	scanf ("%s",&ejercicio);
	if (fumas=1){
		edad=edad-3;
		printf ("\n\nTu edad es %d ",edad);
	}
	else{
		printf ("\n\nTu edad es %d ",edad);
	}
	
}
