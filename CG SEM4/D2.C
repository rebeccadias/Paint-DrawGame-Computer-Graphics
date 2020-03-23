#include<conio.h>
//#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>

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
	 cprintf("                 ");
	 cprintf("         ÜÛßÛÛÛÛÜ");
	 cprintf("         ÛÛÛÛÛÛÛÛ");
	 cprintf("         ÛÛÛÛÛßßß");
	 cprintf(" Û      ÜÛÛÛÛßßß ");
	 cprintf(" ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ ");
	 cprintf(" ßÛÛÛÛÛÛÛÛÛÛÛ  ß ");
	 cprintf("   ßÛÛÛÛÛÛÛß     ");
	 if(jump==1 || jump==2){
	 cprintf("    ÛÛß ßÛ       ");
	 cprintf("    ÛÜ   ÛÜ      ");
	 }//if
	 else if(a==1){
	 cprintf("    ßÛÛß  ßßß    ");
	 cprintf("      ÛÜ         ");
	 a=2;
	}//else if a=1
	  else if(a==2){
    cprintf("     ßÛÜ ßÛ      ");
    cprintf("          ÛÜ     ");
    a=1;
    } //else if a=2

    // if(jump!=0){
    //     printf("                ");
    // }
    // else{

    //     printf("ßßßßßßßßßßßßßßßßß");
    // }
    cprintf("                             ");
    delay(speed);
}//ds
void obj(){
	static int x=0;
	static int src=0;
	if(x==56 && t<4){
		src=0;
		speed=40;
		window(36,8,60,9);
		cprintf("                 ");

	}
	window(74-x,20,80-x,25);
	//obj ka code
	x++;
	if(x==73){
	x=0;
	src++;
	window(70,2,80,3);
	cprintf("       ");
	window(70,2,80,3);
	cprintf("        ");
       //	cprintf("%d",scr);
	if(speed>20)
		speed --;
	}
}

void main()
{
	char ch;
	int i;
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
	//else if (ch=='x')
	  //  return(0);
    } 


}