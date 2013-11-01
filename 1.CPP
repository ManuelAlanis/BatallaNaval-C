////PROYECTO 2DA REVISION



////////////////////pantalla de inicio batalla naval :D

#include <conio.h>;
#include <stdio.h>;
#include <stdlib.h>;
#include <graphics.h>;
#include <dos.h>
#include <ctype.h>
#include <string.h>


void inicializa ()
		{int gm,gd=DETECT;
		initgraph (&gd,&gm,"C:\\TCPP\\BGI");
		}
		void uno()
		{
		clearviewport();
		setbkcolor(0);
		fillellipse(320,240,100,50);
		getch();
		}


		void pixeleada()
{ int i;
for (i=1;i<1000;i=i+1)putpixel(rand()%640,rand()%480,0);
}

		void dos()
		{
		clearviewport();
		bar(200,200,440,280);
		getch();
		}


//FONDO DE PANTALLA
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
//////////COMIENZA CODIGO PARA HONGO VOID HONGOCOMPLETO!!
void construccion ()
{ int poly [68];
	clearviewport();
	setbkcolor(WHITE);
poly[0]=200;
poly[1]=450;
//2              23
poly[2]=400;
poly[3]=450;
//3
poly[4]=400;
poly[5]=430;
//4
poly[6]=420;
poly[7]=430;
//5
poly[8]=420;
poly[9]=390;
//6
poly[10]=440;
poly[11]=390;
//7
poly[12]=440;
poly[13]=370;
//8
poly[14]=460;
poly[15]=370;
//9
poly[16]=460;
poly[17]=230;
//10
poly[18]=440;
poly[19]=230;
//11
poly[20]=440;
poly[21]=190;
//12
poly[22]=420;
poly[23]=190;
//13
poly[24]=420;
poly[25]=170;
//14
poly[26]=400;
poly[27]=170;
//15
poly[28]=400;
poly[29]=150;
//16
poly[30]=360;
poly[31]=150;
//17
poly[32]=360;
poly[33]=130;
//18
poly[34]=240;
poly[35]=130;
//19
poly[36]=240;
poly[37]=150;
//20
poly[38]=200;
poly[39]=150;
//21
poly[40]=200;
poly[41]=170;
//22
poly[42]=180;
poly[43]=170;
//23
poly[44]=180;
poly[45]=190;
//24
poly[46]=160;
poly[47]=190;
//25
poly[48]=160;
poly[49]=230;
//26
poly[50]=140;
poly[51]=230;
//27
poly[52]=140;
poly[53]=370;
//28
poly[54]=160;
poly[55]=370;
//29
poly[56]=160;
poly[57]=370;
//30
poly[58]=160;
poly[59]=390;
//31
poly[60]=180;
poly[61]=390;
//32
poly[62]=180;
poly[63]=430;
//33
poly[64]=200;
poly[65]=430;
//34
poly[66]=200;
poly[67]=450;
setcolor(0);
setfillstyle(1,1);
fillpoly (34,poly);
}


void ojo ()
{ int poly [44];
poly[0]=220;
poly[1]=430;
//2
poly[2]=380;
poly[3]=430;
//3
poly[4]=380;
poly[5]=410;
//4
poly[6]=400;
poly[7]=410;
//5
poly[8]=400;
poly[9]=370;
//6
poly[10]=380;
poly[11]=370;
//7
poly[12]=380;
poly[13]=350;
//8
poly[14]=340;
poly[15]=350;
//9
poly[16]=340;
poly[17]=390;
//10
poly[18]=320;
poly[19]=390;
//11
poly[20]=320;
poly[21]=350;
//12
poly[22]=280;
poly[23]=350;
//13
poly[24]=280;
poly[25]=390;
//14
poly[26]=260;
poly[27]=390;
//15
poly[28]=260;
poly[29]=350;
//16
poly[30]=220;
poly[31]=350;
//17
poly[32]=220;
poly[33]=370;
//18
poly[34]=200;
poly[35]=370;
//19
poly[36]=200;
poly[37]=410;
//20
poly[38]=220;
poly[39]=410;
//21
poly[40]=220;
poly[41]=430;
setcolor(7);
setfillstyle(1,7);
fillpoly (21,poly);
}

void cabeza ()
{ int poly [50];
poly[0]=160;
poly[1]=350;
//2
poly[2]=200;
poly[3]=350;
//3
poly[4]=200;
poly[5]=330;
//4
poly[6]=400;
poly[7]=330;
//5
poly[8]=400;
poly[9]=350;
//6
poly[10]=440;
poly[11]=350;
//7
poly[12]=440;
poly[13]=250;
//8
poly[14]=420;
poly[15]=250;
//9
poly[16]=420;
poly[17]=210;
//10
poly[18]=400;
poly[19]=210;
//11
poly[20]=400;
poly[21]=190;
//12
poly[22]=380;
poly[23]=190;
//13
poly[24]=380;
poly[25]=170;
//14
poly[26]=340;
poly[27]=170;
//15
poly[28]=340;
poly[29]=150;
//16
poly[30]=260;
poly[31]=150;
//17
poly[32]=260;
poly[33]=170;
//18
poly[34]=220;
poly[35]=170;
//19
poly[36]=220;
poly[37]=190;
//20
poly[38]=200;
poly[39]=190;
//21
poly[40]=200;
poly[41]=210;
//22
poly[42]=180;
poly[43]=210;
//23
poly[44]=180;
poly[45]=250;
//24
poly[46]=160;
poly[47]=250;
//25
poly[48]=160;
poly[49]=350;

setcolor(7);
setfillstyle(1,7);
fillpoly (25,poly);
}

void mancha1 ()
{ int poly [16];
poly[0]=220;
poly[1]=210;
//2
poly[2]=260;
poly[3]=210;
//3
poly[4]=260;
poly[5]=190;
//4
poly[6]=280;
poly[7]=190;
//5
poly[8]=280;
poly[9]=150;
//6
poly[10]=260;
poly[11]=150;
//7
poly[12]=260;
poly[13]=170;
//8
poly[14]=220;
poly[15]=170;
setcolor(0);
setfillstyle(1,9);
fillpoly (8,poly);
}


void mancha2 ()
{ int poly [16];
poly[0]=340;
poly[1]=210;
//2
poly[2]=380;
poly[3]=210;
//3
poly[4]=380;
poly[5]=170;
//4
poly[6]=340;
poly[7]=170;
//5
poly[8]=340;
poly[9]=150;
//6
poly[10]=320;
poly[11]=150;
//7
poly[12]=320;
poly[13]=190;
//8
poly[14]=340;
poly[15]=190;

setcolor(0);
setfillstyle(1,9);
fillpoly (8,poly);
}

void mancha3 ()
{ int poly [26];
poly[0]=260;
poly[1]=330;
//2
poly[2]=340;
poly[3]=330;
//3
poly[4]=340;
poly[5]=310;
//4
poly[6]=360;
poly[7]=310;
//5
poly[8]=360;
poly[9]=250;
//6
poly[10]=340;
poly[11]=250;
//7
poly[12]=340;
poly[13]=230;
//8
poly[14]=260;
poly[15]=230;
//9
poly[16]=260;
poly[17]=250;
//10
poly[18]=240;
poly[19]=250;
//11
poly[20]=240;
poly[21]=310;
//12
poly[22]=260;
poly[23]=310;
setcolor(0);
setfillstyle(1,9);
fillpoly (12,poly);
}


void mancha4 ()
{ int poly [20];
poly[0]=400;
poly[1]=310;
//2
poly[2]=440;
poly[3]=310;
//3
poly[4]=440;
poly[5]=250;
//4
poly[6]=420;
poly[7]=250;
//5
poly[8]=420;
poly[9]=210;
//6
poly[10]=400;
poly[11]=210;
//7
poly[12]=400;
poly[13]=230;
//8
poly[14]=380;
poly[15]=230;
//9
poly[16]=380;
poly[17]=290;
//10
poly[18]=400;
poly[19]=290;

setcolor(0);
setfillstyle(1,9);
fillpoly (10,poly);
}

void mancha5 ()
{ int poly [20];
poly[0]=160;
poly[1]=310;
//2
poly[2]=200;
poly[3]=310;
//3
poly[4]=200;
poly[5]=290;
//4
poly[6]=220;
poly[7]=290;
//5
poly[8]=220;
poly[9]=230;
//6
poly[10]=200;
poly[11]=230;
//7
poly[12]=200;
poly[13]=210;
//8
poly[14]=180;
poly[15]=210;
//9
poly[16]=180;
poly[17]=250;
//10
poly[18]=160;
poly[19]=250;

setcolor(0);
setfillstyle(1,9);
fillpoly (10,poly);
setcolor (4);
//settextstyle (0,0,5);
//outtextxy (30,50,"CARGANDO JUEGO");
//setcolor (WHITE);
}
void c()
{
setcolor (4);
settextstyle (0,0,5);
outtextxy (30,50,"C");
}
void a1()
{
setcolor (4);
settextstyle (0,0,5);
outtextxy (70,55,"A");
}
void r()
{
setcolor (4);
settextstyle (0,0,5);
outtextxy (110,50,"R");
}

void g()
{
setcolor (4);
settextstyle (0,0,5);
outtextxy (150,55,"G");
}

void a2()
{
setcolor (4);
settextstyle (0,0,5);
outtextxy (190,50,"A");
}

void n()
{
setcolor (4);
settextstyle (0,0,5);
outtextxy (230,55,"N");
}
void d()
{
setcolor (4);
settextstyle (0,0,5);
outtextxy (270,50,"D");
}

void o()
{
setcolor (4);
settextstyle (0,0,5);
outtextxy (310,55,"O");
}
void hongocompleto()
{
int i=0;
do{

//for(i=6;i<9;i++)
//{
setbkcolor(WHITE);
construccion();
////C
setcolor (7);
settextstyle (0,0,5);
outtextxy (30,50,"C");
////A
setcolor (7);
settextstyle (0,0,5);
outtextxy (70,55,"A");
/////R
setcolor (7);
settextstyle (0,0,5);
outtextxy (110,50,"R");

/////G
setcolor (7);
settextstyle (0,0,5);
outtextxy (150,55,"G");
/////A
setcolor (7);
settextstyle (0,0,5);
outtextxy (190,50,"A");
/////N
setcolor (7);
settextstyle (0,0,5);
outtextxy (230,55,"N");
/////D
setcolor (7);
settextstyle (0,0,5);
outtextxy (270,50,"D");
/////O
setcolor (7);
settextstyle (0,0,5);
outtextxy (310,55,"O");
c();
//a1();
//r();
//g();
//a2();
//n();
//d();
//o();
//c();
delay(200);
cabeza();
a1();
delay(200);
ojo();
r();

delay(200);
mancha1();
g();
delay(200);

mancha2();
a2();
delay(200);

mancha3();
n();
delay(200);

mancha4();
d();
delay(200);

mancha5();
o();
delay(200);
//getch();
i=i++;

//kbhit();
}while (i<2);
//}while (!kbhit());
}




////////TERMINA HONGO COMPLETO !!


//PRAMA FINAL(REAL)
void inicia ()

{
//////////////////////PANTALLA 1
inicializa();

hongocompleto();
/////////////////////END PATALLA 1
//hongocompleto();
//clrscr();
//printf("ESCRIBE TU NOMBRE");
//getch();
}
///////////////////////FINALIZA PANTALLA INICIO

////////////////////////////////////COMIENZA GUARDAR////////////////
////////////////////////////////////////////////////



void capturacadena(int x, int y)
{char tecla, cad [100];
int pos;
cad[0]='\x0';
settextstyle(3,0,4);
do{
setcolor(WHITE);
outtextxy(x,y,cad);
tecla=getch();
if(isalnum(tecla)|tecla==' ')
{
pos=strlen(cad);
cad[pos]=tecla;
cad[pos+1]='\x0';
}
if(tecla==8)
{
setcolor(7);
outtextxy(x,y,cad);
pos=strlen(cad);
cad[pos-1]='\x0';
}

}while(tecla!=13);
}
void guardar()
{
inicializa();
setbkcolor(7);
settextstyle(3,0,4);
outtextxy(100,50,"Escriba nombre para la partida");
capturacadena(100,100);
}



///////////////////////////TERMINA GUARDAR///////////////////////
////////////////////////////////////////////////////////////////////




///////////////////////////////////////////////////////////////////////
////////////////////COMIENZA JUGANDO///////////////////////////////////
///////////////////////////////////////////////////////////////////////
void pinta(int M[10][10])
{ int i,j;
char cad[20];
settextstyle(2,0,0);
//box(0,0,getmaxx(),getmaxy(),1,0);
//for (i=1;i<1000;i=i+1)putpixel(rand()%640,rand()%480,WHITE);
	box(10,0,110,40,1,7);
	outtextxy(20,10,"Batallas");

	box(120,0,230,40,1,7);
	outtextxy(130,10,"Trofeos");

	box(240,0,350,40,1,7);
	outtextxy(250,10,"Guardar");

	box(530,0,600,40,1,7);
	outtextxy(540,10,"Salir");



setbkcolor(WHITE);
settextstyle(2,0,0);
for(i=0;i<10;i++)
for(j=0;j<10;j++)
{

box (50+j*25,50+i*25,75+j*25,75+i*25,1,8);
gcvt(M[i][j],2,cad);
//outtextxy(105+j*50,105+i*50,cad);
	 settextstyle (3,0,RED);
	 setcolor(4);
	 outtextxy (50,350,"Utiliza las flechas para moverte");
	setcolor(WHITE);

}
}

void asigna (int M[10][10])
{int L[25],i,j,r,k;
for (i=0;i<25;i++) L[i]=0;

for (i=0;i<24;i++)
	{do{	k=1+rand()%24;
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
	M[i][j]=L[k];
	k++;
	}
}

void juega(int M[10][10])
{int i,j,x,y,puntos;
char tecla,cad[20],MUEV[20];
i=4;j=4;x=4;y=4;
puntos=0;
pinta(M);
do{     setcolor(RED);
	rectangle(50+j*25,50+i*25,75+j*25,75+i*25);
	tecla=getch();
	setcolor(WHITE);
	rectangle(50+j*25,50+i*25,75+j*25,75+i*25);
switch(tecla)
{
case 13: box(50+j*25,50+i*25,75+j*25,75+i*25,1,RED);
	 puntos++;
	 gotoxy(1,1);
	 settextstyle (0,0,RED);
	 setcolor(4);
	 outtextxy (350,50,"Fallaste!");

	 delay(500);
	 setcolor(WHITE);
	 outtextxy (350,50,"Fallaste!");

	// printf("%d",puntos);
	 //gotoxy(1,1);
	 //printf("%d",puntos);

case 0: tecla=getch();

	switch(tecla)
	{
		case 72:
		i--;
		settextstyle (3,0,RED);
		setcolor(4);
		outtextxy (50,400,"y enter para disparar a un barco");
		break;
	case 80:
	i++;
	settextstyle (3,0,RED);
	setcolor(4);
	outtextxy (50,400,"y enter para disparar a un barco");
	break;
		case 75:
		j--;
		settextstyle (3,0,RED);
		setcolor(4);
		outtextxy (50,400,"y enter para disparar a un barco");
		break;
	case 77:
	j++;
	settextstyle (3,0,RED);
	setcolor(4);
	outtextxy (50,400,"y enter para disparar a un barco");
	break;

	}
if(i<0)i=0; if (i>9)i=9;
if(j<0)j=0; if (j>9)j=9;
/*
M[y][x]=M[i][j];
	 r
box(100+x*50,100+y*50,150+x*50,150+y*50,1,RED);
gcvt(M[y][x],2,cad);
outtextxy(105+x*50,105+y*50,cad);
M[i][j]=0;
x=j;y=i;
  */
break;


}
  }while (tecla!=27);
}

void jugando()
{ int M[10][10];
asigna(M);
inicializa();
juega(M);
}




///////////////////////////////////////////////////////////////////////
///////////////////////TERMINA JUGANDO/////////////////////////////////
///////////////////////////////////////////////////////////////////////



////////////////////COMIENZA MENU PRINCIPAL !!
void mancha5menu ()
{ int poly [20];
poly[0]=160;
poly[1]=310;
//2
poly[2]=200;
poly[3]=310;
//3
poly[4]=200;
poly[5]=290;
//4
poly[6]=220;
poly[7]=290;
//5
poly[8]=220;
poly[9]=230;
//6
poly[10]=200;
poly[11]=230;
//7
poly[12]=200;
poly[13]=210;
//8
poly[14]=180;
poly[15]=210;
//9
poly[16]=180;
poly[17]=250;
//10
poly[18]=160;
poly[19]=250;

setcolor(0);
setfillstyle(1,9);
fillpoly (10,poly);
setcolor (4);
settextstyle (0,0,5);
outtextxy (30,50,"EN CONSTRUCCION");
setcolor (WHITE);
}

void hongocompletomenu()
{
construccion();
cabeza();
ojo();
mancha1();
mancha2();
mancha3();
mancha4();
mancha5menu();
getch();
}


////////TERMINA HONGO COMPLETO !!

void submenu()
{ int i;
//////pintar menu
	       setbkcolor(WHITE);
settextstyle(2,0,0);
box(0,0,getmaxx(),getmaxy(),1,0);
//for (i=1;i<1000;i=i+1)putpixel(rand()%640,rand()%480,RED);
	box(10,0,110,40,1,7);
	outtextxy(20,10,"Batallas");

	box(120,0,230,40,1,7);
	outtextxy(130,10,"Trofeos");

	box(240,0,350,40,1,7);
	outtextxy(250,10,"Guardar");

	box(530,0,600,40,1,7);
	outtextxy(540,10,"Salir");
//////////////
	box(10,40,110,60,1,7);
	outtextxy(40,45,"Batalla 1");

	box(10,60,110,80,1,7);
	outtextxy(40,65,"Batalla 2");

	box(10,80,110,100,1,7);
	outtextxy(40,85,"Batalla 3");

	box(10,100,110,120,1,7);
	outtextxy(40,105,"Batalla 4");

	box(10,120,110,140,1,7);
	outtextxy(40,125,"Batalla 5");
}
//CODIGO PARA APARENTAR MOVIENTO
void muevesubmenu()
{
int i;
char tecla;
i=1;
submenu();
do{
//(IMPORTANTE)  validar los cambios de color de las cajas
	switch(i)
	{
case 1:	box(10,40,110,60,1,4);
	outtextxy(40,45,"Batalla 1");
	break;
case 2:	box(10,60,110,80,1,4);
	outtextxy(40,65,"Batalla 2");
	break;
case 3:	box(10,80,110,100,1,4);
	outtextxy(40,85,"Batalla 3");
	break;
case 4:	box(10,100,110,120,1,4);
	outtextxy(40,105,"Batalla 4");
	break;
case 5:	box(10,120,110,140,1,4);
	outtextxy(40,125,"Batalla 5");
	break;
	}//FINDARK

tecla=getch();
switch(i)
	{
case 1:	box(10,40,110,60,1,7);
	outtextxy(40,45,"Batalla 1");
	break;
case 2:	box(10,60,110,80,1,7);
	outtextxy(40,65,"Batalla 2");
	break;
case 3:	box(10,80,110,100,1,7);
	outtextxy(40,85,"Batalla 3");
	break;
case 4:	box(10,100,110,120,1,7);
	outtextxy(40,105,"Batalla 4");
	break;
case 5:	box(10,120,110,140,1,7);
	outtextxy(40,125,"Batalla 5");
	break;
	}//FINDLIGHT

	//Para validar los movimientos izquierda,derecha
	switch(tecla)
	{case 0: tecla=getch();
		 switch(tecla)
		 {case 72: i--;break;
		  case 80: i++;break;
		 }
		 if(i>5)i=1;
		 if(i<1)i=5;
		 break;//fin cero

//validar las pantalla
	case 13: switch(i)
		{ case 1: jugando();break;
		  case 2: jugando();break;
		  case 3: jugando();break;
		  case 4: jugando();break;
		 case 5: jugando	();break;
		}
//para recuerperar menu(pintar menu)
if(i!=6)submenu();
		break;//fin enter
	}
  }while(tecla!=27);

}

///////////////SUBMENU2

void submenu2()
{ int i;
//////pintar menu
setbkcolor(WHITE);
settextstyle(2,0,0);
box(0,0,getmaxx(),getmaxy(),1,0);
//for (i=1;i<1000;i=i+1)putpixel(rand()%640,rand()%480,WHITE);
	box(10,0,110,40,1,7);
	outtextxy(20,10,"Batallas");

	box(120,0,230,40,1,7);
	outtextxy(130,10,"Trofeos");

	box(240,0,350,40,1,7);
	outtextxy(250,10,"Guardar");

	box(530,0,600,40,1,7);
	outtextxy(540,10,"Salir");
//////////////
	box(120,40,230,60,1,7);
	outtextxy(130,45,"Trofeos batalla 1");

	box(120,60,230,80,1,7);
	outtextxy(130,65,"Trofeos batalla 2");

	box(120,80,230,100,1,7);
	outtextxy(130,85,"Trofeos batalla 3");

	box(120,100,230,120,1,7);
	outtextxy(130,105,"Trofeos batalla 4");

	box(120,120,230,140,1,7);
	outtextxy(130,125,"Trofeos batalla 5");
}
//CODIGO PARA APARENTAR MOVIENTO
void muevesubmenu2()
{
int i;
char tecla;
i=1;
submenu2();
do{
//(IMPORTANTE)  validar los cambios de color de las cajas
	switch(i)
	{
case 1: box(120,40,230,60,1,4);
	outtextxy(130,45,"Trofeos batalla 1");
	break;
case 2:	box(120,60,230,80,1,4);
	outtextxy(130,65,"Trofeos batalla 2");
	break;
case 3:	box(120,80,230,100,1,4);
	outtextxy(130,85,"Trofeos batalla 3");
	break;
case 4:	box(120,100,230,120,1,4);
	outtextxy(130,105,"Trofeos batalla 4");
	break;
case 5:	box(120,120,230,140,1,4);
	outtextxy(130,125,"Trofeos batalla 5");
	break;
	}//FINDARK

tecla=getch();
switch(i)
	{
case 1:
	box(120,40,230,60,1,7);
	outtextxy(130,45,"Trofeos batalla 1");
	break;
case 2:
	box(120,60,230,80,1,7);
	outtextxy(130,65,"Trofeos batalla 2");
	break;
case 3:
	box(120,80,230,100,1,7);
	outtextxy(130,85,"Trofeos batalla 3");
	break;
case 4:
	box(120,100,230,120,1,7);
	outtextxy(130,105,"Trofeos batalla 4");
	break;
case 5:
	box(120,120,230,140,1,7);
	outtextxy(130,125,"Trofeos batalla 5");
	break;
	}//FINDLIGHT

	//Para validar los movimientos izquierda,derecha
	switch(tecla)
	{case 0: tecla=getch();
		 switch(tecla)
		 {case 72: i--;break;
		  case 80: i++;break;
		 }
		 if(i>5)i=1;
		 if(i<1)i=5;
		 break;//fin cero

//validar las pantalla
	case 13: switch(i)
		{ case 1: hongocompletomenu();break;
		  case 2: hongocompletomenu();break;
		  case 3: hongocompletomenu();break;
		  case 4: hongocompletomenu();break;
		  case 5: hongocompletomenu();break;
		}
//para recuerperar menu(pintar menu)
if(i!=6)submenu2();
		break;//fin enter
	}
  }while(tecla!=27);

}

/////////////////END SUBMENU2

		//CAJAS DE OPCIONES  1, 2 y salir
void menu()
{int i;
setbkcolor(WHITE);
settextstyle(2,0,0);
box(0,0,getmaxx(),getmaxy(),1,0);
//for (i=1;i<1000;i=i+1)putpixel(rand()%640,rand()%480,WHITE);
	box(10,0,110,40,1,7);
	outtextxy(20,10,"Batallas");

	box(120,0,230,40,1,7);
	outtextxy(130,10,"Trofeos");

	box(240,0,350,40,1,7);
	outtextxy(250,10,"Guardar");

	box(530,0,600,40,1,7);
	outtextxy(540,10,"Salir");


}
//CODIGO PARA APARENTAR MOVIENTO
void mueve()
{
int i;
char tecla;
i=1;
menu();
do{
//(IMPORTANTE)  validar los cambios de color de las cajas
	switch(i)
	{
case 1:	box(10,0,110,40,1,RED);
	outtextxy(20,10,"Batallas");
	break;
case 2:	box(120,0,230,40,1,RED);
	outtextxy(130,10,"Trofeos");
	break;
case 3:	box(240,0,350,40,1,RED);
	outtextxy(250,10,"Guardar");
	break;
case 4:	box(530,0,600,40,1,RED);
	outtextxy(540,10,"Salir");
	}//FINDARK

tecla=getch();
switch(i)
	{
case 1:	box(10,0,110,40,1,7);
	outtextxy(20,10,"Batallas");
	break;
case 2:	box(120,0,230,40,1,7);
	outtextxy(130,10,"Trofeos");
	break;
case 3:	box(240,0,350,40,1,7);
	outtextxy(250,10,"Guardar");
	break;
case 4:	box(530,0,600,40,1,7);
	outtextxy(540,10,"Salir");
	}//FINDLIGHT

	//Para validar los movimientos izquierda,derecha
	switch(tecla)
	{case 0: tecla=getch();
		 switch(tecla)
		 {case 75: i--;break;
		  case 77: i++;break;
		 }
		 if(i>4)i=1;
		 if(i<1)i=4;
		 break;//fin cero

//validar las pantalla
	case 13: switch(i)
		{ case 1: muevesubmenu();break;
		  case 2: muevesubmenu2();break;
		  case 3: guardar();break;
		  case 4: tecla=27;break;
		}
//para recuerperar menu(pintar menu)
if(i!=4)menu();
		break;//fin enter
	}
  }while(tecla!=27);
}


//PRAMA FINAL(REAL)
void menuprincipal ()
{
inicializa();
mueve();
}




////////////////////TERMINA MENU PRINCIPAL



//////////////////////////COMIENZA JUGANDO////////////////



/////////////////////TERMINA JUGANDO



void main()
{
inicia();
menuprincipal();
}