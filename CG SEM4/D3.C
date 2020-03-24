#include<conio.h>
//#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>

/*	int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
for(i=0;i<=360;++i)
{
circle(300,200,80);
pieslice(300,200,0,i,80);
outtextxy(200,320,"Loading.Please Wait!");
delay(20);
}
closegraph();
}*/

void getup(){
	int x;
	textcolor(BLACK);
	textbackground(15);
	clrscr();
	window(10,2,70,3);
	cprintf("Press 'X' to Exit, Press Space to Jump ");
	window(62,2,80,3);
	cprintf("SCORE: ");
	window(1,25,80,25);
	for( x=0;x<79;x++)
		cprintf(" // ");
	textcolor(0);


}
int t;
int speed=40;
void ds(int jump)
{
	static int a=1;
	if(jump==0){
		t=0;
	}
	else if(jump==2){
		t--;
	}
	else{
	 t++;
	}
	window (2,15-t,18,25);
    cprintf("         млпллллм");
	cprintf("         лллллллл");
	cprintf("         лллллппп");
	cprintf(" л      мллллппп ");
	cprintf(" ллм  мллллллммм ");
	cprintf(" пллллллллллл  п ");
	cprintf("   плллллллп     ");

	 if(jump==1 || jump==2){

    cprintf("    ллп пл       ");
	cprintf("    лм   лм      ");
	 }//if
	 else if(a==1){
    cprintf("    пллп  ппп    ");
	cprintf("      лм         ");
	 a=2;
	}
	  else if(a==2){
    cprintf("     плм пл      ");
	cprintf("          лм     ");
    a=1;
    } //else if a=2


    cprintf("                             ");
    delay(speed);
}//ds

void obj(){
	static int x=0;
	static int  src=0;
	if(x==56 && t<4){
		src=0;
		speed=40;
		window(36,8,60,9);
		textcolor(MAGENTA);
		cprintf("  Game Over ");
		getch();
		window(36,8,60,9);
		textcolor(BLACK);
		cprintf("              ");

	}
	window(74-x,20,80-x,25);
    cprintf("л    л ");
    cprintf("л    л ");
    cprintf("лммммл ");
    cprintf("  л    ");
    cprintf("  л  " );
	x++;
	if(x==73){
	x=0;
	src++;
	window(70,2,80,3); 
	cprintf("       ");
	window(70,2,80,3);
	cprintf("        ");
       // cprintf("%d",scr);
	if(speed>20)
		speed --;
	}
}

void main()
{
	char ch;
	int i;
	// load();
	getup();
	
	 while(1)
    {
		while(!kbhit())
		{
	    	ds(0);
	    	obj();
		}
		ch=getch();
		if(ch==' ')
			{
	    		for(i=0;i<10;i++)
	    		{
	    			ds(1);
	    			obj();
	    		}
	    		for(i=0;i<10;i++)
	    		{
	    			ds(2);
	    			obj();
	    		}
	}
	else if (ch=='x')
	  break;
    } 


}