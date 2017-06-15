#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int linea();
int circulo();
int triangulo();
int cuadrado();
int barra();
int rectangulo();
int trapecio();
int pentagono();
int hexagono();
int octagono();


int opcion;
main()
{
do{
clrscr();
textcolor(7);
gotoxy(35,1);
cprintf("Linea......1");
gotoxy(35,2);  
cprintf("Circulo....2");
gotoxy(35,3);
cprintf("Triangulo..3");
gotoxy(35,4);
cprintf("Cuadro.....4");
gotoxy(35,5);
cprintf("Bar........5");
gotoxy(35,6);
cprintf("Rectangulo.6");
gotoxy(35,7);
cprintf("Trapecio...7");
gotoxy(35,8);
cprintf("Pentagono..8");
gotoxy(35,9);
cprintf("Hexagono...9");
gotoxy(35,10);
cprintf("Octagono...10");
gotoxy(35,11);
cprintf("Salir.......0");


textcolor(6);
gotoxy(1,13);
cprintf("Elige la opcion: ");
scanf("%d",&opcion);
switch(opcion)
{
      case 1: 
	  linea();
      break;
	  
      case 2: 
	  circulo();
      break;
	  
      case 3: 
	  triangulo();
      break;

      case 4: 
	  cuadrado();
      break;

      case 5: 
	  barra();
      break;

      case 6: 
	  rectangulo();
      break;

      case 7: 
	  trapecio();
      break;

      case 8: 
	  pentagono();
      break;

      case 9: 
	  hexagono();
      break;

      case 10: 
	  octagono();
      break;
      
      default:
	cprintf("opcion invalida");
      break;


}
clrscr();
gotoxy(35,12);
textcolor(4);
cprintf("Adios");

getch();
}
while(opcion!=0);
return(0);
}




linea()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n",
             grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());
   xmax = getmaxx();
   ymax = getmaxy();

   /* draw a diagonal line */
   setcolor(4);
   line(0, 0,800,600);

   /* draw a diagonal line */
   setcolor(3);
   line(0, 480,640,0);

   /* draw a diagonal line */
   setcolor(5);
   line(0, 800,0,0);


   setcolor(6);
   line(0, 0,640,0);
   setcolor(7);
     line(0, 240,640,240);
   setcolor(8);
   line(638, 0,638,478);
   setcolor(3);
   line(0, 478,638,478);

    setcolor (9);
    circle(320, 240, 100);

   ellipse(320, 240, 0, 360,
150, 75);

 ellipse(320, 240, 0, 360,
75, 150);

   /* clean up */
   getch();
   closegraph();
   return (0);
   }



circulo()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 100;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   setcolor(3);
   circle(midx, midy, radius);

   /* clean up */
   getch();
   closegraph();
   return 0;
}



triangulo()
{
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   initgraph(&gdriver, &gmode, "");

   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n",
             grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());
   xmax = getmaxx();
   ymax = getmaxy();

   setcolor(5);
   line(360, 50, 100, 360);
   setcolor(4);
   line(100, 360, 480, 360);
   setcolor(3);
   line(360, 50, 480, 360);
   

   getch();
   closegraph();
   return 0;
}



cuadrado()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy, i;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;

   /* loop through the fill patterns */
   for (i=SOLID_FILL; i<USER_FILL; i++)
   {
      /* set the fill style */
      setfillstyle(i, getmaxcolor());

      /* draw the bar */
      bar(midx-50, midy-50, midx+50,
	 midy+50);

      getch();
   }

   /* clean up */
   closegraph();
   return 0;
}





barra()
{
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy, i;

   initgraph(&gdriver, &gmode, "");
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); 
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;


   for (i=SOLID_FILL; i<USER_FILL; i++)
   {

      setfillstyle(i, 3
      );

      bar(midx-50, midy-50, midx+50,
	 midy+50);

	 setcolor(3);
	 outtextxy(270,180,"cuadrado");

      getch();
   }

   closegraph();
   return 0;
}



rectangulo()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n",
             grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());
   xmax = getmaxx();
   ymax = getmaxy();

   setcolor(1);
   line(150, 150, 450, 150);
   setcolor(6);
   line(150, 150, 150, 300);
   setcolor(5);
   line(450, 150, 450, 300);
   setcolor(4);
   line(150, 300, 450, 300);

   setcolor(9);
   outtextxy(255,225,"Rectangulo");



   /* clean up */
   getch();
   closegraph();
   return 0;
}




trapecio()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n",
             grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());
   xmax = getmaxx();
   ymax = getmaxy();

   setcolor(1);
   line(250, 150, 350, 150);
   setcolor(6);
   line(250, 150, 150, 300);
   setcolor(5);
   line(350, 150, 450, 300);
   setcolor(4);
   line(150, 300, 450, 300);

   setcolor(9);
   outtextxy(270,225,"Trapecio");



   /* clean up */
   getch();
   closegraph();
   return 0;
}




pentagono()
{
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   initgraph(&gdriver, &gmode, "");

   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n",
             grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());
   xmax = getmaxx();
   ymax = getmaxy();

   
   setcolor(5);
   line(275, 120, 150, 200);
   setcolor(3);
   line(150, 200, 200, 300);
   setcolor(6);
   line(200, 300, 350, 300);
   setcolor(8);
   line(276, 120, 400, 190);
   setcolor(9);
   line(400, 190, 350, 300);

   outtext("Pentagono");
   outtextxy(240,210, "Pentagono");




   getch();
   closegraph();
   return 0;
}




hexagono()
{
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   initgraph(&gdriver, &gmode, "");

   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n",
             grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());
   xmax = getmaxx();
   ymax = getmaxy();

   setcolor(4);
   line(200, 100, 350, 100);
   setcolor(5);
   line(200, 100, 150, 200);
   setcolor(3);
   line(150, 200, 200, 300);
   setcolor(6);
   line(200, 300, 350, 300);
   setcolor(8);
   line(350, 100, 400, 190);
   setcolor(9);
   line(400, 190, 350, 300);

   outtext("Hexagono");
   outtextxy(240,195, "Hexagono");




   getch();
   closegraph();
   return 0;
}




octagono()
{
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   initgraph(&gdriver, &gmode, "");

   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n",
             grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());
   xmax = getmaxx();
   ymax = getmaxy();
   
   setcolor(1);
   line(200, 100, 300, 100);
   setcolor(2);
   line(200, 100, 150, 170);
   setcolor(3);
   line(150,250,150,170);
   setcolor(4);
   line(150, 250, 200, 300);
   setcolor(5);
   line(200, 300, 300, 300);
   setcolor(6);
   line(350, 250, 300, 300);
   setcolor(7);
   line(350, 250, 350, 161);
   setcolor(8);
   line(300, 100, 350, 160);
  

   outtext("Octagono");
   outtextxy(220,200, "Octagono");




   getch();
   closegraph();
   return 0;
}

