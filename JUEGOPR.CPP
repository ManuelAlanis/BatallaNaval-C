//MATRICES
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
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

//////dibujo barcos

//////comienza barco de 5 horizontal
void figbarco5horizontal(int x,int y)
{
int poly [16];


poly[0]=x+25;
poly[1]=y;
//2
poly[2]=x+100;
poly[3]=y;
//3
poly[4]=x+125;
poly[5]=y+10;
//4

poly[6]=x+125;
poly[7]=y+15;
//5
poly[8]=x+100;
poly[9]=y+25;
//6
poly[10]=x+25;
poly[11]=y+25;
//7
poly[12]=x;
poly[13]=y+15;
//8
poly[14]=x;
poly[15]=y+10;

setbkcolor(0);
setfillstyle(1,0);
fillpoly (8,poly);
}
//////termina barco de 5 horizontal


////comienza barco de 5 vertical
void figbarco5vertical(int x,int y)
{
int poly [16];


poly[0]=x+10;
poly[1]=y;
//2
poly[2]=x+15;
poly[3]=y;
//3
poly[4]=x+25;
poly[5]=y+25;
//4

poly[6]=x+25;
poly[7]=y+100;
//5
poly[8]=x+15;
poly[9]=y+125;
//6
poly[10]=x+10;
poly[11]=y+125;
//7
poly[12]=x;
poly[13]=y+100;
//8
poly[14]=x;
poly[15]=y+25;

setbkcolor(0);
setfillstyle(1,0);
fillpoly (8,poly);
}

//////termina barco de 5 vertical

//////////comienza barco de 4 vertical
void figbarco4vertical(int x,int y)
{
int poly [16];


poly[0]=x+10;
poly[1]=y;
//2
poly[2]=x+15;
poly[3]=y;
//3
poly[4]=x+25;
poly[5]=y+25;
//4

poly[6]=x+25;
poly[7]=y+75;
//5
poly[8]=x+15;
poly[9]=y+100;
//6
poly[10]=x+10;
poly[11]=y+100;
//7
poly[12]=x;
poly[13]=y+75;
//8
poly[14]=x;
poly[15]=y+25;

setbkcolor(0);
setfillstyle(1,0);
fillpoly (8,poly);
}

/////end barco de 4 vertical

////comienza barco de 4 horizontal
void figbarco4horizontal(int x,int y)
{
int poly [16];


poly[0]=x+25;
poly[1]=y;
//2
poly[2]=x+75;
poly[3]=y;
//3
poly[4]=x+100;
poly[5]=y+10;
//4

poly[6]=x+100;
poly[7]=y+15;
//5
poly[8]=x+75;
poly[9]=y+25;
//6
poly[10]=x+25;
poly[11]=y+25;
//7
poly[12]=x;
poly[13]=y+15;
//8
poly[14]=x;
poly[15]=y+10;

setbkcolor(0);
setfillstyle(1,0);
fillpoly (8,poly);
}


/////termina barco de 4 terminal
/////comienza barco horizontal de 3
void figbarco3horizontal(int x,int y)
{
int poly [16];


poly[0]=x+25;
poly[1]=y;
//2
poly[2]=x+50;
poly[3]=y;
//3
poly[4]=x+75;
poly[5]=y+10;
//4

poly[6]=x+75;
poly[7]=y+15;
//5
poly[8]=x+50;
poly[9]=y+25;
//6
poly[10]=x+25;
poly[11]=y+25;
//7
poly[12]=x;
poly[13]=y+15;
//8
poly[14]=x;
poly[15]=y+10;

setbkcolor(0);
setfillstyle(1,0);
fillpoly (8,poly);
}


/////termina barco horizontal de 3




void ganajugador()
{
clearviewport();
settextstyle(3,0,4);
outtextxy(200,200,"Ganaste");
//printf("Ganaste pinche puto");
getch();
}

//////Comienza guardar partida
void guardarpartida(int M[10][10],int M2[10][10],int G[10][10],int G2[10][10])
{     int i,j;
/*
for(i=0;i<10;i++)
for(j=0;j<10;j++)
		{
		M2[i][j]=0;
		G2[i][j]=0;
		}*/
for(i=0;i<10;i++)
for(j=0;j<10;j++)
		G2[i][j]=G[i][j];
		M2[i][j]=M[i][j];
}
void abrirpartida(int M[10][10],int M2[10][10],int G[10][10],int G2[10][10])
{
int i,j;

     for(i=0;i<10;i++)
     for(j=0;j<10;j++)
		{
		M[i][j]=M2[i][j];
		G[i][j]=G2[i][j];
		switch(G[i][j])
				       {
		case 2:box(350+j*25,50+i*25,375+j*25,75+i*25,1,RED);
				break;  }
	       //	if(G[i][j]==2)box(350+j*25,50+i*25,375+j*25,75+i*25,1,RED);
		if(G[i][j]==1)box(350+j*25,50+i*25,375+j*25,75+i*25,1,WHITE);
		if(G[i][j]==0)box(350+j*25,50+i*25,375+j*25,75+i*25,1,3);
		if(G[i][j]==511)
		////jugador

		if(M[i][j]==2)box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
		if(M[i][j]==1)box(50+j*25,50+i*25,75+j*25,75+i*25,1,WHITE);
		if(M[i][j]==0)box(50+j*25,50+i*25,75+j*25,75+i*25,1,3);
		}
     //box(350+j*25,50+i*25,375+j*25,75+i*25,1,WHITE);

}


void pintajugador(int M[10][10])
{
int i,j;
char cad[20];
setbkcolor(0);
settextstyle(2,0,0);
setcolor(BLUE);
for(i=0;i<10;i++)
for(j=0;j<10;j++)
{box (50+j*25,50+i*25,75+j*25,75+i*25,1,BLUE);
M[i][j]=0;
//gcvt(M[i][j],2,cad);
//outtextxy(55+j*25,55+i*25,cad);
delay(5);
}
}

void comprobarmatriz(int M[10][10])
{
int i,j;
char cad[20];
setbkcolor(0);
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
{ int i,j,i2,j2,barcos5=0,barcos4=0,barcos3=0;

char cad[20];
//setbkcolor(0);
settextstyle(2,0,0);
for(i=0;i<10;i++)
for(j=0;j<10;j++)
{box (350+j*25,50+i*25,375+j*25,75+i*25,1,BLUE);
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
if(j<6&&G[i][j]==0&&G[i][j+1]==0&&G[i][j+2]==0&&G[i][j+3]==0&&G[i][j+4]==0&&barcos5<1)
			{
			   //box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			   //setcolor(RED);
			   setcolor(BLUE);

			   G[i][j]=511;
	  //		   gcvt(G[i][j],3,cad);
		 //	   outtextxy(355+j*25,55+i*25,cad);
			   //
			   G[i][j+1]=511;
			   gcvt(G[i][j+1],3,cad);
	       //		   outtextxy(300+25+55+j*25,55+i*25,cad);
			   //
			   G[i][j+2]=511;
			   gcvt(G[i][j+2],3,cad);
		   //	   outtextxy(300+50+55+j*25,55+i*25,cad);
			   //
			   G[i][j+3]=511;
			   gcvt(G[i][j+3],3,cad);
		     //	   outtextxy(300+75+55+j*25,55+i*25,cad);
			   //
			   G[i][j+4]=511;
			   gcvt(G[i][j+3],3,cad);
		     //	   outtextxy(300+100+55+j*25,55+i*25,cad);
			   barcos5++;
			}




  }while (barcos5<1);

/////termina genera barco de 5




//////////////comienza genera barco de 4

do{

i=rand()%9;
j=rand()%9;

	if(i<7&&G[i+2][j]==0&&G[i+1][j]==0&&G[i+3][j]==0&&G[i][j]==0&&barcos4<2)
			{
			   //box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			   //setcolor(RED);
			   setcolor(RED);

			   G[i][j]=411;
			   gcvt(G[i][j],3,cad);
		    //	   outtextxy(300+55+j*25,55+i*25,cad);
			   //
			   G[i+1][j]=411;
			   gcvt(G[i+1][j],3,cad);
		   //	   outtextxy(300+55+j*25,25+55+i*25,cad);
			   //
			   G[i+2][j]=411;
			   gcvt(G[i+2][j],3,cad);
		    //	   outtextxy(300+55+j*25,50+55+i*25,cad);
			   //
			   G[i+3][j]=411;
			   gcvt(G[i+3][j],3,cad);
		  //	   outtextxy(300+55+j*25,75+55+i*25,cad);
			   barcos4++;
			}
	      }while(barcos4<2);


//////////////termina genera barco de 4


/////////////comienza generar barcos de 3

do{
i=rand()%9;
j=rand()%9;

		if(j<8&&G[i][j+2]==0&G[i][j+1]==0&&G[i][j]==0&&barcos3<2){
			//box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);

		      //	setfillstyle(1,RED)
			//box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			setcolor(YELLOW);

			G[i][j]=311;
			gcvt(G[i][j],3,cad);
		 //	outtextxy(300+55+j*25,55+i*25,cad);
			//
			G[i][j+1]=311;
			gcvt(G[i][j+1],3,cad);
		 //	outtextxy(300+25+55+j*25,55+i*25,cad);
			//
			G[i][j+2]=311;
			gcvt(G[i][j+2],3,cad);
		 //	outtextxy(300+50+55+j*25,55+i*25,cad);
			barcos3++;
		      }
		  }while(barcos3<2);

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
i=4;j=4;
//x=4;y=4;
pintajugador(M);
//pintaenemigo(M);
do{
       //	box(50+j*25,50+i*25,75+j*25,75+i*25,1,BLUE);
       //	tecla=getch();
	setcolor(RED);
	rectangle(50+j*25,50+i*25,75+j*25,75+i*25);
	tecla=getch();
	setcolor(BLUE);
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
	if(j<6&&M[i][j]==0&&M[i][j+1]==0&&M[i][j+2]==0&&M[i][j+3]==0&&M[i][j+4]==0&&barcos5<1)
			{
			   //box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			   //setcolor(RED);
		      //	   setcolor(BLUE);

			   figbarco5horizontal(50+j*25,50+i*25);

			   M[i][j]=511;
			   gcvt(M[i][j],3,cad);
			   outtextxy(55+j*25,55+i*25,cad);
			   //
			   M[i][j+1]=511;
			   gcvt(M[i][j+1],3,cad);
			   outtextxy(25+55+j*25,55+i*25,cad);
			   //
			   M[i][j+2]=511;
			   gcvt(M[i][j+2],3,cad);
			   outtextxy(50+55+j*25,55+i*25,cad);
			   //
			   M[i][j+3]=511;
			   gcvt(M[i][j+3],3,cad);
			   outtextxy(75+55+j*25,55+i*25,cad);
			   //
			   M[i][j+4]=511;
			   gcvt(M[i][j+3],3,cad);
			   outtextxy(100+55+j*25,55+i*25,cad);
			   barcos5++;
			}

		break;

//BARCO HORIZONTAL DE 5

	//BARCO VERTICAL DE 5 letra"s"
case 102:{
	if(i<6&&M[i][j]==0&&M[i+1][j]==0&&M[i+2][j]==0&&M[i+3][j]==0&&M[i+4][j]==0&&M[i+5][j]==0&&barcos5<1)
			{
			   //box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			   //setcolor(RED);
			//   setcolor(BLUE);


			    figbarco5vertical(50+j*25,50+i*25);


			   M[i][j]=511;
			   gcvt(M[i][j],3,cad);
			   outtextxy(55+j*25,55+i*25,cad);
			   //
			   M[i+1][j]=511;
			   gcvt(M[i+1][j],3,cad);
			   outtextxy(55+j*25,25+55+i*25,cad);
			   //
			   M[i+2][j]=511;
			   gcvt(M[i+2][j],3,cad);
			   outtextxy(55+j*25,50+55+i*25,cad);
			   //
			   M[i+3][j]=511;
			   gcvt(M[i+3][j],3,cad);
			   outtextxy(55+j*25,75+55+i*25,cad);
			   //
			   M[i+4][j]=511;
			   gcvt(M[i+4][j],3,cad);
			   outtextxy(55+j*25,100+55+i*25,cad);
			   barcos5++;
			}
	     }
		break;

//BARCO HORIZONTAL DE 5



////////BARCO DE 4 VERTICAL letra g=103
case 103:    {
	if(i<7&&M[i+2][j]==0&&M[i+1][j]==0&&M[i+3][j]==0&&M[i][j]==0&&barcos4<2)
			{
			   //box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			   //setcolor(RED);
			//   setcolor(BLUE);

			   //pintar el barco de 4
			   figbarco4vertical(50+j*25,50+i*25);

			   M[i][j]=411;
			   gcvt(M[i][j],3,cad);
			   outtextxy(55+j*25,55+i*25,cad);
			   //
			   M[i+1][j]=411;
			   gcvt(M[i+1][j],3,cad);
			   outtextxy(55+j*25,25+55+i*25,cad);
			   //
			   M[i+2][j]=411;
			   gcvt(M[i+2][j],3,cad);
			   outtextxy(55+j*25,50+55+i*25,cad);
			   //
			   M[i+3][j]=411;
			   gcvt(M[i+3][j],3,cad);
			   outtextxy(55+j*25,75+55+i*25,cad);
			   barcos4++;
			}
	      }
		break;

////TERMINA BARCO DE 4 VERTICAL

//Comienza BARCOD DE 4 HORIZONTAL
case 116:      {
	if(j<7&&M[i][j+3]==0&&M[i][j]==0&&barcos4<2)
			{
			   //box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			   //setcolor(RED);
			//   setcolor(RED);
			   figbarco4horizontal(50+j*25,50+i*25);
			   M[i][j]=411;
			   gcvt(M[i][j],3,cad);
			   outtextxy(55+j*25,55+i*25,cad);
			   //
			   M[i][j+1]=411;
			   gcvt(M[i][j+1],3,cad);
			   outtextxy(25+55+j*25,55+i*25,cad);
			   //
			   M[i][j+2]=411;
			   gcvt(M[i][j+2],3,cad);
			   outtextxy(50+55+j*25,55+i*25,cad);
			   //
			   M[i][j+3]=411;
			   gcvt(M[i][j+3],3,cad);
			   outtextxy(75+55+j*25,55+i*25,cad);
			   barcos4++;
			}
		}
		break;
		//TERMINA BARCO DE 4 HORIZOTAL

////////BARCO HORIZONTAL DE 3 Letra y=121
case 121:        {
		if(j<8&&M[i][j+1]==0&&M[i][j+2]==0&&M[i][j]==0&&barcos3<2){
			//box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);

		      //	setfillstyle(1,RED)
			//box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
		   //	setcolor(YELLOW);
			figbarco3horizontal(50+j*25,50+i*25);
			M[i][j]=311;
			gcvt(M[i][j],3,cad);
			outtextxy(55+j*25,55+i*25,cad);
			//
			M[i][j+1]=311;
			gcvt(M[i][j+1],3,cad);
			outtextxy(25+55+j*25,55+i*25,cad);
			//
			M[i][j+2]=311;
			gcvt(M[i][j+2],3,cad);
			outtextxy(50+55+j*25,55+i*25,cad);
			barcos3++;
		      }
		  }
		//   comprobarmatriz(M);
		   break;

		   ///
		   ////////BARCO VERTICAL DE 3 Letra y=121
case 105:       {
		if(i<8&&M[i][j]&&M[i+1][j]==0&&M[i+2][j]==0&&barcos3<2)
		  {
			//box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);

		      //	setfillstyle(1,RED)
			//box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			setcolor(YELLOW);

			M[i][j]=311;
			gcvt(M[i][j],3,cad);
			outtextxy(55+j*25,55+i*25,cad);
			//
			M[i+1][j]=311;
			gcvt(M[i+1][j],3,cad);
			outtextxy(55+j*25,25+55+i*25,cad);
			//
			M[i+2][j]=311;
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

	       //	gcvt(M[i][j],3,cad);

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
if(barcos5==1&&barcos4==2&&barcos3==2)barcos=-1;


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


///////// comienza dispara enemigo
void disparaenemigo(int M[10][10])
{int i,j,bandera=-1;
int barco5=0,barco4=0,barco3=0;
char cad[20];



	do{
	i=0+rand()%10;
	j=0+rand()%10;
	if(M[i][j]==1||M[i][j]==2)bandera=-1;
	else
	bandera=0;
	}while(bandera!=0);

			if(M[i][j]==0)
			{
			setcolor(WHITE);

			M[i][j]=2;
		   //	   gcvt(M[i][j],3,cad);
		   //	   outtextxy(355+j*25,55+i*25,cad);


			box(50+j*25,50+i*25,75+j*25,75+i*25,1,WHITE);
			setcolor(RED);
			settextstyle(8,0,6);
			outtextxy(150,300,"Fall0 !");
			delay(500);
			settextstyle(8,0,6);
			setcolor(0);
			outtextxy(150,300,"Fall0 !");

			}

	      //	if(M[i][j]==1)		bandera=0;

				if(M[i][j]==511)

				{

				barco5++;
				M[i][j]=1;
			     //	gcvt(M[i][j],3,cad);
		   //	   	outtextxy(355+j*25,55+i*25,cad);


				box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
				setcolor(RED);
				settextstyle(8,0,6);
				outtextxy(150,300,"Te dispararon !");
			       /*	sound(580);delay(300);nosound();
				sound(700);delay(300);nosound();
				sound(800);delay(200);nosound();
				sound(950);delay(300);nosound();
			       */ //	sound(800);delay(200);nosound();
			   //	sound(950);delay(500);nosound();
				sound(1000);
				delay(100);
				nosound();
				delay(500);
				settextstyle(8,0,6);
				setcolor(0);
				outtextxy(150,300,"Te dispararon !");

				bandera=-1;
				nosound();
				}
	      if(M[i][j]==411)

			{

			barco4++;
			M[i][j]=1;
			gcvt(M[i][j],3,cad);
	   //	   	outtextxy(355+j*25,55+i*25,cad);
			box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
			setcolor(RED);
			settextstyle(8,0,6);
			outtextxy(150,300,"Te dispararon !");
			delay(500);
			      //	sound(950);delay(500);nosound();
				sound(1000);
				delay(100);
				nosound();
				delay(500);
			settextstyle(8,0,6);
			setcolor(0);
			outtextxy(150,300,"Te dispararon !");
			bandera=-1;
			nosound();
			}

			if(M[i][j]==311)

				{

				barco3++;
				M[i][j]=1;
				gcvt(M[i][j],3,cad);
		   //	   	outtextxy(355+j*25,55+i*25,cad);


				box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
				setcolor(RED);
				settextstyle(8,0,6);
				outtextxy(150,300,"Te dispararon !");
				delay(500);
					  //	sound(950);delay(500);nosound();
						sound(1000);
						delay(100);

						sound(900);
						delay(100);

						sound(800);
						delay(100);
				settextstyle(8,0,6);
				setcolor(0);
				outtextxy(150,300,"Te dispararon !");

				nosound();
				}


}
///////////////termina disparaenemigo

////////////////////////JUEGA JUGADOR
void disparajugador(int G[10][10],int M[10][10],int M2[10][10],int G2[10][10])
{int i,j;
int cuenta5=0,cuenta4=0,cuenta3=0,banderaganador=-1;

//x,y;

int bandera=-1;
char tecla,cad[20],MUEV[20];
i=4;j=4;
//x=4;y=4;//pintajugador(M);
pintaenemigo(G);
do{
       //	box(50+j*25,50+i*25,75+j*25,75+i*25,1,BLUE);
       //	tecla=getch();
	setcolor(BLACK);
	rectangle(350+j*25,50+i*25,375+j*25,75+i*25);
	tecla=getch();
	setcolor(BLUE);
	rectangle(350+j*25,50+i*25,375+j*25,75+i*25);
switch(tecla)
{

  //	do{

	case 101: comprobarmatrizenemigo(G); break;
	////

case 115:  guardarpartida(M,M2,G,G2);  break;
case 111:abrirpartida(M,M2,G,G2);      break;
case 32://SPACE
	if (G[i][j]==1||G[i][j]==2)bandera=-1; //repetidar
	///barco de 5
	if(G[i][j]==511){
			box(350+j*25,50+i*25,375+j*25,75+i*25,1,RED);
			setcolor(RED);
			settextstyle(8,0,6);
			outtextxy(150,300,"Le diste D: !");
			sound(1000);

						sound(1000);
						delay(100);

						sound(900);
						delay(100);

						sound(800);
						delay(100);


					  nosound();

			delay(500);
			settextstyle(8,0,6);
			setcolor(0);
			outtextxy(150,300,"Le diste D: !");
	       //	juegaenemigo();
			G[i][j]=2;
			bandera=0;
			cuenta5++;
		      //	nosound();
		      }
	if(G[i][j]==411){
			box(350+j*25,50+i*25,375+j*25,75+i*25,1,RED);
			setcolor(RED);
			settextstyle(8,0,6);
			outtextxy(150,300,"Le diste D: !");
			sound(1000);

						sound(1000);
						delay(100);

						sound(900);
						delay(100);

						sound(800);
						delay(100);


					  nosound();

			delay(500);
			settextstyle(8,0,6);
			setcolor(0);
			outtextxy(150,300,"Le diste D: !");
	       //	juegaenemigo();
			G[i][j]=2;
			bandera=0;
			cuenta4++;
		      //	nosound();
		      }
		if(G[i][j]==311){

			box(350+j*25,50+i*25,375+j*25,75+i*25,1,RED);
			setcolor(RED);
			settextstyle(8,0,6);
			outtextxy(150,300,"Le diste D: !");
			sound(1000);

						sound(1000);
						delay(100);

						sound(900);
						delay(100);

						sound(800);
						delay(100);


					  nosound();

			delay(500);
			settextstyle(8,0,6);
			setcolor(0);
			outtextxy(150,300,"Le diste D: !");
	       //	juegaenemigo();
			G[i][j]=2;
			bandera=0;
			cuenta3++;
		      //	nosound();
		      }

if(G[i][j]==0){


	box(350+j*25,50+i*25,375+j*25,75+i*25,1,WHITE);
	setcolor(RED);
		settextstyle(8,0,6);
		outtextxy(150,300,"Fallaste !");
		delay(500);
		settextstyle(8,0,6);
		setcolor(0);
		outtextxy(150,300,"Fallaste !");
       //	juegaenemigo();
		G[i][j]=1;
		bandera=0;
	}
   //
	if(bandera==0&&banderaganador!=0)disparaenemigo(M);

	break;


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
if(cuenta5==5&&cuenta4==8&&cuenta3==6)
			{
			banderaganador=0;

			}
if(banderaganador==0)tecla=27;
//if(banderaganador==0)ganajugador();
/*
M[y][x]=M[i][j];
box(50+x*25,50+y*25,75+x*25,75+y*25,1,3);
gcvt(M[y][x],2,cad);
outtextxy(55+x*25,55+y*25,cad);
M[i][j]=0;
x=j;y=i;
*/
break;

//}while(bandera!=0);///BANDERA DE REPETICION
/*if(cuenta5==5&&cuenta4==8&&cuenta3==6)
			{
			banderaganador=0;
			tecla=27;
			}
  */
}
  }while (tecla!=27&&banderaganador!=0);

  if(banderaganador==0)ganajugador();
}

////////////////Termina juega jugador




void pintatablero()
{
int i,j;
setfillstyle (RED,RED);
textcolor(RED);
settextstyle(6,0,1);
outtextxy(100,350,"r   Barco de 5 horizontal");


figbarco4horizontal(120,400);
outtextxy(100,390,"t   Barco de 4 horizontal");

outtextxy(100,420,"y   Barco de 3 horizontal");


}


void main()
{
int M[10][10];
int G[10][10];
int M2[10][10];
int G2[10][10];

randomize();
inicializa();
//ganajugador();
pintatablero();
colocarbarcos(M);
disparajugador(G,M,M2,G2);
}