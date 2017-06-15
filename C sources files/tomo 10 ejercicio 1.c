#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>

int main(int argc, char *argv[])
int terminacion;
{
  
  char* diaSemana[7] = {"Domingo","Lunes","Martes","Miercoles",

                  "Jueves","Viernes","Sabado"};  
                  
   time_t tiempo_local = time(NULL);       // instante actual
          struct tm* tmP = localtime(&tiempo_local);
        
 printf("Hoy es:");         

       printf(diaSemana[tmP->tm_wday]); 
printf("\n\n");
if((terminacion==2 || terminacion==3)&& diaSemana[tmP->tm_wday]=="Lunes")
        {
       printf(" Hoy no circula, toma tus precauciones pertinentes");

        }
  
       else if((terminacion==7||terminacion==8)&& diaSemana[tmP->tm_wday]=="Martes")
        {
        printf(" Hoy no circula, toma tus precauciones pertinentes"); 
                  
       }

  system("PAUSE");	
  return 0;
}

