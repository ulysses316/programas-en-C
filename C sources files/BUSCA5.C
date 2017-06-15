/*Traza un cuadro con color en C en la poscicion (X,Y)*/

void lim_cua(int c,int x, int y)
{
  colfil(c);
  rectangle(x,y,x+50,y+50);
  floodfill(x+1,y+1,c);
  setcolor(15);
  rectangle(x,y,x+50,y+50);
}

/*Traza el numero de bombas N alrededor de la poscicion (X,Y)*/

void lim_num(int n,int x,int y)
{
  char num[2];

  itoa(n,num,10);
  lim_cua(0,x,y);
  setcolor(16-n);
  settextstyle(1,0,4);
  outtextxy(x+17,y+2,num);
}

/*Escribe dos textos verticales y espera hasta que se presione la tecla*/

void texto(char t1[20], char t2[20],int x, int y);
{
  int c=15;
    while(!(kbhit())){
		       setcolor(c);
		       settextjustify(0,1);
		       settextstyle(3,2,3);
		       outtextxy(x,y,t1);
		       settextstyle(3,2,4);
		       outtextxy(x+50,y,t2);
			 if(c==0)c=16;
		       c--;
		       delay(100);
		       settextjustify(0,2);
		       settextstyle(2,0,0);
			 if (c%2==0)setcolor(15);
		       else setcolor(0);
		       outtextxy(getmaxx()-110,getmaxy()-30"Presione una tecla");
		       outtextxy(getmaxx()-110,getmaxy()-20"Para continuar");
		     }
}


/*Pone todas las bombas/banderas*/

void pon(int poner)
{
  int a,b;

  for(a=0;a<Y;a++)
    for(b=0;b<X;b++)
      if(m1[a+1][b+1]==1)
	if(poner==1)bomba(119+25+(50*b),79+25+(50*a));
	else bandera(119+25+(50*b),79+25+(50*a));
}  


















