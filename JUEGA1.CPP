////MATRICES
#include <conio.h>;
#include <stdio.h>;
#include <stdlib.h>;
#include <graphics.h>;
void inicializa ()
{int gm,gd=DETECT;
initgraph (&gd,&gm,"C:\\TC\\TCPP\\BGI");
}

void box (int x1,int y1,int x2,int y2,int relleno,int color)
{int poly[8];
poly[0]=x1;
poly[1]=y1;
poly[2]=x2;
poly[3]=y1;
poly[4]=x2;
poly[5]=y2;
poly[6]=x1;
poly[7]=y2;
setfillstyle (relleno,color);
fillpoly (4,poly);
}

void pinta(int M[10][10])
{ int i,j;
char cad[20];
settextstyle(2,0,0);
for(i=0;i<10;i++)
for(j=0;j<10;j++)
{box (100+j*50,100+i*50,150+j*50,150+i*50,1,RED);
gcvt(M[i][j],2,cad);
outtextxy(105+j*50,105+i*50,cad);
}
}

void asigna (int M[10][10])
{int L[100],i,j,r,k;
//setbkcolor(7);
for (i=0;i<100;i++) L[i]=0;

for (i=0;i<99;i++)
	{do{
//	k=k+1
			 k=1+rand()%99;
			r=0; j=0;
		do{	if(k!=L[j])j++;
			else r=1;
		  }while(j<i && r==0);
	}while(r==1);
	L[i]=k;
	}
k=0;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
	{
     //	M[i][j]=L[k];
	k++;
	}
}

void juega(int M[10][10])
{int i,j,x,y;
char tecla,cad[20],MUEV[20];
i=4;j=4;x=4;y=4;
pinta(M);
do{
	box(100+j*50,100+i*50,150+j*50,150+i*50,1,BLUE);
	tecla=getch();
switch(tecla)
{
case 13:
{box (100+j*50,100+i*50,150+j*50,150+i*50,1,3);
gcvt(M[i][j],2,cad);
outtextxy(10+j*50,10+i*50,cad);
}
case 0: tecla=getch();

	switch(tecla)
	{
	case 72: i--;
		break;
	case 80:i++;break;
	case 75:j--;break;
	case 77:j++;break;


	}
if(i<0)i=0; if (i>9)i=9;
if(j<0)j=0; if (j>9)j=9;

M[y][x]=M[i][j];
box(100+x*50,100+y*50,150+x*50,150+y*50,1,7);
gcvt(M[y][x],2,cad);
outtextxy(10+x*50,10+y*50,cad);
M[i][j]=0;
x=j;y=i;
break;


}
  }while (tecla!=27);
}

void main()
{ int M[10][10];
clrscr();

asigna(M);
inicializa();
juega(M);
}
