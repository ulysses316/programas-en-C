#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<graphics.h>

#define X 8
#define Y 8
#define B 10

int posx,posy;        /*casilla activa*/
    m1 [Y+2][X+2],    /*posicion de las bombas y donde ya paso*/
    m2 [Y][X],        /*Numero de bombas alrededor de cada poscicion*/
    nba,              /*Numero de casilla abiertas*/
    imp,uso;          /*Controla la impresion no impresion de las minas*/


/*Inicializacion del modo grafico, devuelve 1 si no tiene un monitor
  tipo VGA o superior a alta resolucion*/

int ini_g(void)
{
   int gdriver=DETECTED,gmode,errorcode;
   char c;

   initgraph(&gdriver,&gmode,"");
     if (gdriver==9 && gmode==2)return 0;
   errorcode=graphresult();
     if (errorcode!=grOK){
			   printf("Error grafico %s\n",grapherrormsg(errorcode));
			   printf("Presione una tecla para continuar");
			   c=getch();
			   if(c==0)
			     c=getch();
			   exit(1);
			 }
   return 1;
}


/*Establece el color del modo grafico a C y el estilo de rellenado*/

void colfil(int c)
{
  setcolor(c);
  setfillstyle(1,c);
}

/*Traza una flecha
1) arriba
2) abajo
3) derecha
4) izquierda */


void fle(int x, int y, int t)
{
  setcolor(15);
    if(t==1){
	      line(x,y-5,x,y+5);
	      line(x-5,y-2,x,y-5);
	      line(x,y-5,x+5,y-2);
	    }

    if(t==2){
	      line(x-5,y,x+5,y);
	      line(x+2,y-5,x+5,y);
	      line(x+5,y,x+2,y+5);
	    } 
	    
    if(t==4){
	      line(x-5,y,x+5,y);
	      line(x-2,y-5,x-5,y);
	      line(x-5,y,x-2,y+5);
	    } 
}

/*Traza una bandera en la poscicion (X,Y)*/

void bandera(int x, int y)
{
  colfil(4);
  line(x-15,y-7,x,y-15);
  line(x-15,y-7,x,y);
  line(x,y,x,y-15);
  floodfill(x-1,y-5,4);
  setcolor(8);
  line(x,y-15,x,y+15);	      
  line(x+1,y-15,x+1,y+15); 
  colfil(0);
  sector(x,y+15,0,180,15,7);
} 
    
    
/*Traza una bomba en la poscicion(X,Y)*/

void bomba(int x, int y)
{
  colfil(0);
  fillellipse(x,y,10,10);
  line(x-15,y,x+15,y);
  line(x,y-15,x,y+15);
  line(x-10,y-10,x+10,y+10);
  line(x+10,y-10,x-10,y+10);
  colfil(7);
  fillellipse(x-3,y-3,2,2);
}



/*Traza la cara
 1) Feliz
 0) Normal
-1) Triste */

void car(int t)
{
  colfil(14);
  fillellipse(getmaxx()-120-40,39,20,20);
  colfil(0);





 /*JUNTAR TODO*/




    
    
    
    
	       







	  






