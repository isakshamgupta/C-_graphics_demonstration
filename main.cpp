//code_submitted_by_saksham_iiitbh.
#include <graphics.h>
int main()
{
//setting window size.
 initwindow(720, 600, "First Sample");
 int i,j=0;
 
 //setting style of font,size and color
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 outtextxy(25,24,"Press any key to see the car moving");
 getch();
 setcolor(3);
 setfillstyle(SOLID_FILL,RED);
 
 //for loop for movement
 for(i=0;i<750;i+=10,j++)
 {	outtextxy(270,430,"My Moving Car");
 	line(0,420,720,420);
 	rectangle(50+i,275,150+i,400);
 	rectangle(150+i,350,200+i,400);
 	circle(75+i,410,10);
 	circle(175+i,410,10);
 	setcolor(j);
 	delay(100);
 	if(i==720)
 	break;
 	if(j==15)
 	j=2;
 	cleardevice();
 }
 getch();
 return 0;
}
