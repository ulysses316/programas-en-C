/*m limpia el areaalrededor del la posicion (y,x=) /*
void limpia (int y,int x)
{
(ify<0 || x<0 || y>7 || x>7|| m1[y+1][x+1]==9) return;
m1[y+1][x+1]=9;
nba++;
if (m2[y][x]==0)
{
   lim_cua(0,119+(50*(x)),79+50*(y)));
   limpia(y-1,x-1);
   limpia(y-1,x);
   limpia(y-1,x+1);
   limpia(y,x-1);
   limpia(y,x+1);
   limpia(y+1,x-1);
   limpia(y+1,x);
   limpia(y+1,x+1);
}
else lim_num(m2[y][x], 119+(50*)),79+(50*(y)));
}

/* controla el movimiento de las celdas */
int mov(void)
{
char ch1, ch2;

ch2=ch1='';
setcolor(13);
rectamgle(119+(50*posx),79+(50*posy),119+50+(50*posx),79+50+(50*posy));
while(!(ch1==27 || ch1=='\r' || ch2==';'))
{
while(!(ch1==27 || ch1=='\r\'|| ch2=='H'|| ch2=='M' ||ch2=='P' ||
	ch2=='K'|| ch2==';' || ch2=='G' || ch2== 'I' || ch2=='O'||
	ch2=='Q' || ch2=='<'))
{
ch1=getch();
if(ch1==0)
{
ch2=getch();
ch1'';
}
}
if (ch2=='H' || ch2=='M' || ch2=='K' ||  ch2=='P' ||  ch=='G' ||
    ch2=='I' || ch2=='O' || ch2=='Q')
{
   setcolor(15);
   rectangle(119+(50*posx),79+(50*posy),169+(50*posx),129+(50*posy));
   if(ch2=='H' || ch2=='G' || ch2=='I') posy=posy-1;
   if(ch2=='M' || ch2=='I' || ch2=='Q') posx=posx+1;
   if(ch2=='P' || ch2=='O' || ch2=='Q') posy=posy+1;
   if(ch2=='K' || ch2=='G' || ch2=='O') posx=posx-1;
   if(posy==-1)posy=7;
   if(posx==-1)posx=7;
   if(posy==8)posy=0;
   if(posy==8)posy=0;
   setcolor(13)
   rectangle(119+(50*posx),79+(50*posy),169+(50*posx),129+(50*posy));






