//MATRICES
#include <conio.h>;
#include <stdio.h>;
#include <stdlib.h>;
#include <graphics.h>
#include <dos.h>
void inicializa ()
{int gm,gd=DETECT;
//initgraph (&gd,&gm,"C:\\TCPP\\BGI");
initgraph (&gd,&gm,"C:\\TCPP\\BGI");
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

void pintajugador(int M[10][10])
{
int i,j;
char cad[20];
setbkcolor(7);
settextstyle(2,0,0);
for(i=0;i<10;i++)
for(j=0;j<10;j++)
{box (50+j*25,50+i*25,75+j*25,75+i*25,1,3);
M[i][j]=0;
gcvt(M[i][j],2,cad);
//outtextxy(55+j*25,55+i*25,cad);
delay(5);
}
}

void comprobarmatriz(int M[10][10])
{
int i,j;
char cad[20];
setbkcolor(7);
settextstyle(2,0,0);
for(i=0;i<10;i++)
for(j=0;j<10;j++)
{box (50+j*25,50+i*25,75+j*25,75+i*25,1,3);
//M[i][j]=0;
gcvt(M[i][j],3,cad);
outtextxy(55+j*25,55+i*25,cad);
//delay(5);

}
}
////////////////////Comprobar matriz enemigo

void comprobarmatrizenemigo(int G[10][10])
{
int i,j;
char cad[20];
setbkcolor(7);
settextstyle(2,0,0);
for(i=0;i<10;i++)
for(j=0;j<10;j++)
{box (350+j*25,50+i*25,375+j*25,75+i*25,1,3);
//G[i][j]=0;
gcvt(G[i][j],3,cad);
outtextxy(355+j*25,55+i*25,cad);
//delay(5);

}
}

////////////////////Comprobar matriz enemigo

void pintaecenario()
{
			box(100,300,225,325,1,7);
			outtextxy(110,305,"Barco de 5");
		       // setcolor(3);
			outtextxy(90,325,"*");
			box(100,330,200,355,1,7);
			outtextxy(110,335,"Barco de 4");

			box(100,360,175,385,1,7);
			outtextxy(110,365,"Barco de 3");
}


void pintaenemigo(int G[10][10])
{ int i,j,i2,j2,barcos5,barcos4,barcos3;
randomize();
barcos5=0,barcos4=0,barcos3=0;
char cad[20];
setbkcolor(7);
settextstyle(2,0,0);
for(i=0;i<10;i++)
for(j=0;j<10;j++)
{box (350+j*25,50+i*25,375+j*25,75+i*25,1,3);
G[i][j]=0;
gcvt(G[i][j],2,cad);
//outtextxy(355+j*25,55+i*25,cad);
delay(5);
	}

///////////genera barcos
/////genera 1 barco de 5////
do{

i=rand()%9;
j=rand()%9;
if(j<6&&G[i][j]==0&&G[i][j+1]==0&&G[i][j+2]==0&&G[i][j+3]==0&&G[i][j+4]==0&&barcos5<3)
			{
			   //box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			   //setcolor(RED);
			   setcolor(BLUE);

			   G[i][j]=511;
			   gcvt(G[i][j],3,cad);
			   outtextxy(355+j*25,55+i*25,cad);
			   //
			   G[i][j+1]=521;
			   gcvt(G[i][j+1],3,cad);
			   outtextxy(300+25+55+j*25,55+i*25,cad);
			   //
			   G[i][j+2]=521;
			   gcvt(G[i][j+2],3,cad);
			   outtextxy(300+50+55+j*25,55+i*25,cad);
			   //
			   G[i][j+3]=521;
			   gcvt(G[i][j+3],3,cad);
			   outtextxy(300+75+55+j*25,55+i*25,cad);
			   //
			   G[i][j+4]=531;
			   gcvt(G[i][j+3],3,cad);
			   outtextxy(300+100+55+j*25,55+i*25,cad);
			   barcos5++;
			}




  }while (barcos5<3);

/////termina genera barco de 5




//////////////comienza genera barco de 4

do{

i=rand()%9;
j=rand()%9;

	if(i<7&&G[i+2][j]==0&&G[i+1][j]==0&&G[i+3][j]==0&&G[i][j]==0&&barcos4<3)
			{
			   //box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			   //setcolor(RED);
			   setcolor(RED);

			   G[i][j]=411;
			   gcvt(G[i][j],3,cad);
			   outtextxy(300+55+j*25,55+i*25,cad);
			   //
			   G[i+1][j]=421;
			   gcvt(G[i+1][j],3,cad);
			   outtextxy(300+55+j*25,25+55+i*25,cad);
			   //
			   G[i+2][j]=421;
			   gcvt(G[i+2][j],3,cad);
			   outtextxy(300+55+j*25,50+55+i*25,cad);
			   //
			   G[i+3][j]=421;
			   gcvt(G[i+3][j],3,cad);
			   outtextxy(300+55+j*25,75+55+i*25,cad);
			   barcos4++;
			}
	      }while(barcos4<3);


//////////////termina genera barco de 4


/////////////comienza generar barcos de 3

do{
i=rand()%9;
j=rand()%9;

		if(j<8&&G[i][j+2]==0&G[i][j+2]==0&&G[i][j]==0&&barcos3<3){
			//box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);

		      //	setfillstyle(1,RED)
			//box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			setcolor(YELLOW);

			G[i][j]=311;
			gcvt(G[i][j],3,cad);
			outtextxy(300+55+j*25,55+i*25,cad);
			//
			G[i][j+1]=321;
			gcvt(G[i][j+1],3,cad);
			outtextxy(300+25+55+j*25,55+i*25,cad);
			//
			G[i][j+2]=331;
			gcvt(G[i][j+2],3,cad);
			outtextxy(300+50+55+j*25,55+i*25,cad);
			barcos3++;
		      }
		  }while(barcos3<3);

/////////////////termina generar barcos de 3
//////////////genera barcos
}









void asignajugador (int M[10][10])
{int L[100],i,j,r,k;
for (i=0;i<36;i++) L[i]=0;

for (i=0;i<35;i++)
	{do{	k=1+rand()%36;
		r=0; j=0;
		do{	if(k!=L[j])j++;
			else r=1;
		  }while(j<i && r==0);
	}while(r==1);
	L[i]=k;
	}
k=1;
for(i=0;i<6;i++)
for(j=0;j<6;j++)
	{
	M[i][j]=L[k];
	k++;
	}
}

//////////////////////comienza generar barcos enemigo
void generarbarcosenemigo (int G[10][10])
{int L[100],i,j,r,k;
for (i=0;i<36;i++) L[i]=0;

for (i=0;i<35;i++)
	{do{	k=1+rand()%36;
		r=0; j=0;
		do{	if(k!=L[j])j++;
			else r=1;
		  }while(j<i && r==0);
	}while(r==1);
	L[i]=k;
	}
k=1;
for(i=0;i<6;i++)
for(j=0;j<6;j++)
	{
	G[i][j]=L[k];
	k++;
	}
}

////////////////////termina generar barcos enemigo


/*
void asignaenemigo (int M[10][10])
{int L[36],i,j,r,k;
for (i=0;i<36;i++) L[i]=0;

for (i=0;i<35;i++)
	{do{	k=1+rand()%36;
		r=0; j=0;
		do{	if(k!=L[j])j++;
			else r=1;
		  }while(j<i && r==0);
	}while(r==1);
	L[i]=k;
	}
k=0;
for(i=0;i<6;i++)
for(j=0;j<6;j++)
	{
	M[i][j]=L[k];
	k++;
	}
}

*/
///////////////////////////////////COLOCA BARCOS USUARIO
void colocarbarcos(int M[10][10])
{int i,j,x,y,barcos5=0,barcos4=0,barcos3=0,barcos=0;
int m;
char tecla,cad[20],MUEV[20];
i=4;j=4;x=4;y=4;
pintajugador(M);
//pintaenemigo(M);
do{
       //	box(50+j*25,50+i*25,75+j*25,75+i*25,1,BLUE);
       //	tecla=getch();
	setcolor(RED);
	rectangle(50+j*25,50+i*25,75+j*25,75+i*25);
	tecla=getch();
	setcolor(WHITE);
	rectangle(50+j*25,50+i*25,75+j*25,75+i*25);
switch(tecla)
///BARCO DE 4
{


	case 99:
	comprobarmatriz(M);
	break;

//case 101: comprobarmatrizenemigo(G); break;

///BARCO HORIZONTAL DE 5 letra"r"
case 114:
	if(j<6&&M[i][j]==0&&M[i][j+1]==0&&M[i][j+2]==0&&M[i][j+3]==0&&M[i][j+4]==0&&barcos5<3)
			{
			   //box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			   //setcolor(RED);
			   setcolor(BLUE);

			   M[i][j]=511;
			   gcvt(M[i][j],3,cad);
			   outtextxy(55+j*25,55+i*25,cad);
			   //
			   M[i][j+1]=521;
			   gcvt(M[i][j+1],3,cad);
			   outtextxy(25+55+j*25,55+i*25,cad);
			   //
			   M[i][j+2]=521;
			   gcvt(M[i][j+2],3,cad);
			   outtextxy(50+55+j*25,55+i*25,cad);
			   //
			   M[i][j+3]=521;
			   gcvt(M[i][j+3],3,cad);
			   outtextxy(75+55+j*25,55+i*25,cad);
			   //
			   M[i][j+4]=531;
			   gcvt(M[i][j+3],3,cad);
			   outtextxy(100+55+j*25,55+i*25,cad);
			   barcos5++;
			}

		break;

//BARCO HORIZONTAL DE 5

///BARCO VERTICAL DE 5 letra"s"
case 102:   {
	if(i<6&&M[i][j]==0&&M[i+1][j]==0&&M[i+2][j]==0&&M[i+3][j]==0&&M[i+4][j]==0&&M[i+5][j]==0&&barcos5<3)
			{
			   //box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			   //setcolor(RED);
			   setcolor(BLUE);

			   M[i][j]=511;
			   gcvt(M[i][j],3,cad);
			   outtextxy(55+j*25,55+i*25,cad);
			   //
			   M[i+1][j]=521;
			   gcvt(M[i+1][j],3,cad);
			   outtextxy(55+j*25,25+55+i*25,cad);
			   //
			   M[i+2][j]=521;
			   gcvt(M[i+2][j],3,cad);
			   outtextxy(55+j*25,50+55+i*25,cad);
			   //
			   M[i+3][j]=521;
			   gcvt(M[i+3][j],3,cad);
			   outtextxy(55+j*25,75+55+i*25,cad);
			   //
			   M[i+4][j]=531;
			   gcvt(M[i+4][j],3,cad);
			   outtextxy(55+j*25,100+55+i*25,cad);
			   barcos5++;
			}
	     }
		break;

//BARCO HORIZONTAL DE 5



////////BARCO DE 4 VERTICAL letra f=102
case 103:    {
	if(i<7&&M[i+2][j]==0&&M[i+1][j]==0&&M[i+3][j]==0&&M[i][j]==0&&barcos4<3)
			{
			   //box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			   //setcolor(RED);
			   setcolor(RED);

			   M[i][j]=411;
			   gcvt(M[i][j],3,cad);
			   outtextxy(55+j*25,55+i*25,cad);
			   //
			   M[i+1][j]=421;
			   gcvt(M[i+1][j],3,cad);
			   outtextxy(55+j*25,25+55+i*25,cad);
			   //
			   M[i+2][j]=421;
			   gcvt(M[i+2][j],3,cad);
			   outtextxy(55+j*25,50+55+i*25,cad);
			   //
			   M[i+3][j]=421;
			   gcvt(M[i+3][j],3,cad);
			   outtextxy(55+j*25,75+55+i*25,cad);
			   barcos4++;
			}
	      }
		break;

////TERMINA BARCO DE 4 VERTICAL

//Comienza BARCOD DE 4 HORIZONTAL
case 116:      {
	if(j<7&&M[i][j+3]==0&&M[i][j]==0&&barcos4<3)
			{
			   //box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			   //setcolor(RED);
			   setcolor(RED);

			   M[i][j]=411;
			   gcvt(M[i][j],3,cad);
			   outtextxy(55+j*25,55+i*25,cad);
			   //
			   M[i][j+1]=421;
			   gcvt(M[i][j+1],3,cad);
			   outtextxy(25+55+j*25,55+i*25,cad);
			   //
			   M[i][j+2]=421;
			   gcvt(M[i][j+2],3,cad);
			   outtextxy(50+55+j*25,55+i*25,cad);
			   //
			   M[i][j+3]=421;
			   gcvt(M[i][j+3],3,cad);
			   outtextxy(75+55+j*25,55+i*25,cad);
			   barcos4++;
			}
		}
		break;
		//TERMINA BARCO DE 4 HORIZOTAL

////////BARCO HORIZONTAL DE 3 Letra y=121
case 121:        {
		if(j<8&&M[i][j+2]==0&&M[i][j]==0&&barcos3<3){
			//box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);

		      //	setfillstyle(1,RED)
			//box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			setcolor(YELLOW);

			M[i][j]=311;
			gcvt(M[i][j],3,cad);
			outtextxy(55+j*25,55+i*25,cad);
			//
			M[i][j+1]=321;
			gcvt(M[i][j+1],3,cad);
			outtextxy(25+55+j*25,55+i*25,cad);
			//
			M[i][j+2]=331;
			gcvt(M[i][j+2],3,cad);
			outtextxy(50+55+j*25,55+i*25,cad);
			barcos3++;
		      }
		  }
		//   comprobarmatriz(M);
		   break;

		   ///
		   ////////BARCO VERTICAL DE 3 Letra y=121
case 104:       {
		if(i<8&&M[i+2][j]==0&&M[i][j]==0&&barcos3<3){
			//box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);

		      //	setfillstyle(1,RED)
			//box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			setcolor(YELLOW);

			M[i][j]=311;
			gcvt(M[i][j],3,cad);
			outtextxy(55+j*25,55+i*25,cad);
			//
			M[i+1][j]=321;
			gcvt(M[i+1][j],3,cad);
			outtextxy(55+j*25,25+55+i*25,cad);
			//
			M[i+2][j]=331;
			gcvt(M[i+2][j],3,cad);
			outtextxy(55+j*25,50+55+i*25,cad);
			barcos3++;
		      }
		 }
		//   comprobarmatriz(M);
		   break;

		   ///



case 13:
if(M[i][j]==0){

		gcvt(M[i][j],3,cad);
		setcolor(RED);
		settextstyle(8,0,6);
		outtextxy(150,300,"Fallaste estupido");
		delay(200);
		settextstyle(8,0,6);
		setcolor(7);
		outtextxy(150,300,"Fallaste estupido");
		}
	break;
case 0: tecla=getch();

	switch(tecla)
	{
	case 72:i--;break;
	case 80:i++;break;
	case 75:j--;break;
	case 77:j++;break;
	}
if(i<0)i=9; if (i>9)i=0;
if(j<0)j=9; if (j>9)j=0;
if(barcos5==3&&barcos4==3&&barcos3==3)barcos=-1;


//M[y][x]=M[i][j];
/*
box(50+x*25,50+y*25,75+x*25,75+y*25,1,3);
gcvt(M[y][x],2,cad);
outtextxy(55+x*25,55+y*25,cad);
M[i][j]=0;
*/
//x=j;y=i;

break;


}
  }while (tecla!=27&&barcos!=-1);
}

////////////////////////TERMINA JUEGA JUGADOR


/////////////////////////////////TERMINA COLOCA BARCOS USUARIO



////////////////////////JUEGA JUGADOR
void disparajugador(int G[10][10])
{int i,j,x,y;
char tecla,cad[20],MUEV[20];
i=4;j=4;x=4;y=4;
//pintajugador(M);
pintaenemigo(G);
do{
       //	box(50+j*25,50+i*25,75+j*25,75+i*25,1,BLUE);
       //	tecla=getch();
	setcolor(RED);
	rectangle(350+j*25,50+i*25,375+j*25,75+i*25);
	tecla=getch();
	setcolor(WHITE);
	rectangle(350+j*25,50+i*25,375+j*25,75+i*25);
switch(tecla)
{
	//poner barco de 4 cuadros
     case 101: comprobarmatrizenemigo(G); break;
case 13:
if(G[i][j]==0){


	box(350+j*25,50+i*25,375+j*25,75+i*25,1,WHITE);
       //	juegaenemigo();

	}break;

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
/*
M[y][x]=M[i][j];
box(50+x*25,50+y*25,75+x*25,75+y*25,1,3);
gcvt(M[y][x],2,cad);
outtextxy(55+x*25,55+y*25,cad);
M[i][j]=0;
x=j;y=i;
*/
break;


}
  }while (tecla!=27);
}

////////////////Termina juega jugador



void main()
{
int M[10][10];
int G[10][10];
//asignajugador(M);
//asignaenemigo(M);

inicializa();
colocarbarcos(M);
//pintaenemigo(G);
disparajugador(M);
//disparajugador(M);
//getch();
//juegajugador(M);
}
