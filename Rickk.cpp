#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<windows.h>
#include<MMsystem.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
int main()
{
int i,gd=DETECT,gm;
int x=0,a=1,z=0;
initgraph(&gd,&gm,NULL); 
for(i=0;i<550;i++)
{
settextstyle(3,0,3);
outtextxy(475,5," PSG 0 - 0 ManU");
setcolor(WHITE);		
setfillstyle(SOLID_FILL,GREEN);
line(100,50,1100,50);
line(100,50,0,550);
line(0,550,1000,550);
line(1100,50,1000,550);
//Center
floodfill(300,200,WHITE);
line(600,50,500,550);
ellipse(550,300,0,360,60,50);
ellipse(550,300,0,360,20,15);
//Goalpost Right side
line(1060,250,1150,250);
line(1060,250,1060,200);
line(1040,350,1150,350);
line(1040,350,1040,300);
line(1040,300,1060,200);
line(1060,200,1100,200);
line(1040,300,1080,300);
line(1080,300,1100,200);
line(1080,300,1150,350);
line(1100,200,1150,250);
line(1150,350,1150,250);
//Goalpost Left side
line(60,250,0,250);
line(40,350,0,350);
line(40,350,40,300);
line(60,250,60,200);
line(60,200,40,300);
line(60,200,0,225);
line(40,300,0,325);
//Football
setcolor(BLACK);
setfillstyle(INTERLEAVE_FILL,BLUE);
circle(550-i,300,7);
floodfill(550-i,300,BLACK);
//player 1
int y=4;
setcolor(WHITE);
if(i%2==0)
{
circle(707,40+y,7);
line(707,47+y,707,57+y);
line(707+y,47+y,712,52+y);
line(702,52+y,707,47+y);
line(707,57+y,715,65+y);
line(707,57+y,699,65+y);
}
else 
{
circle(707,40,7);
line(707,51-y,707,57);
line(707,51-y,712,52);
line(702,56-y,707,47);
line(707,57,715,65);
line(707,57,699,65);

}
//player 2
if(i%2==0)
{
circle(807,250+y,7);
line(807,257+y,807,267+y);
line(807,257+y,812,262+y);
line(802,262+y,807,257+y);
line(807,267+y,815,275+y);
line(807,267+y,799,275+y);
}
else
{
circle(807,254-y,7);
line(807,261-y,807,271-y);
line(807,261-y,812,266-y);
line(802,266-y,807,261-y);
line(807,271-y,815,279-y);
line(807,271-y,799,279-y);
}
//player 3
if(i%2==0)
{
	
circle(1000,250+y,7);
line(1000,257+y,1000,267+y);
line(1000,257+y,995,262+y);
line(1000,257+y,1005,262+y);
line(1000,267+y,1008,275+y);
line(1000,267+y,992,275+y);
}
else
{
circle(1000,254-y,7);
line(1000,261-y,1000,271-y);
line(1000,261-y,995,266-y);
line(1000,261-y,1005,266-y);
line(1000,271-y,1008,279-y);
line(1000,271-y,992,279-y);
	
}
//player 4
if(i%2==0)
{
circle(600,400+y,7);
line(600,407+y,600,417+y);
line(600,407+y,595,412+y);
line(600,407+y,605,412+y);
line(600,417+y,592,425+y);
line(600,417+y,608,425+y);
}
else
{
circle(600,404-y,7);
line(600,411-y,600,421-y);
line(600,411-y,595,416-y);
line(600,411-y,605,416-y);
line(600,421-y,592,429-y);
line(600,421-y,608,429-y);
	
}
//player 5
if(i<=380)
{

if(i%2==0)
{
circle(100,300+y,7);
line(100,307+y,100,317+y);
line(100,307+y,105,312+y);
line(100,307+y,95,312+y);
line(100,317+y,108,325+y);
line(100,317+y,92,325+y);
}
else
{
circle(100,304-y,7);
line(100,311-y,100,321-y);
line(100,311-y,105,316-y);
line(100,311-y,95,316-y);
line(100,321-y,108,329-y);
line(100,321-y,92,329-y);	
}}
else if(i>380 && i<=400)
{
	circle(100+z,304-z,7);
	line(100+z,311-z,100+z,321-z);
	line(100+z,311-z,105+z,316-z);
	line(100+z,311-z,95+z,316-z);
	line(100+z,321-z,108+z,329-z);
	line(100+z,321-z,92+z,329-z);
	z++;
}
else if(i>400 && i<=450)
{
	circle(100+z,304,7);
	line(107+z,304,117+z,304);
	line(107+z,304,112+z,299);
	line(107+z,304,112+z,309);
	line(117+z,304,120+z,297);
	line(117+z,304,125+z,302);
	z++;
}
else
{
circle(170,279,7);
line(170,286,170,296);
line(170,286,175,291);
line(170,286,165,291);
line(170,296,178,304);
line(170,296,162,304);	
}
//player 6
if(i%2==0)
{	
circle(350,200+y,7);
line(350,207+y,350,217+y);
line(350,207+y,355,212+y);
line(350,207+y,345,212+y);
line(350,217+y,358,225+y);
line(350,217+y,342,225+y);
}
else
{
circle(350,204-y,7);
line(350,211-y,350,219-y);
line(350,211-y,355,216-y);
line(350,211-y,345,216-y);
line(350,221-y,358,229-y);
line(350,221-y,342,229-y);
	
}
//player 7
if(i%2==0)
{
circle(450,350+y,7);
line(450,357+y,450,367+y);
line(450,367+y,442,375+y);
line(450,367+y,458,375+y);
line(450,357+y,445,362+y);
line(450,357+y,455,362+y);
}
else
{
circle(450,354-y,7);
line(450,361-y,450,371-y);
line(450,371-y,442,379-y);
line(450,371-y,458,379-y);
line(450,361-y,445,366-y);
line(450,361-y,455,366-y);
	
}
//player 8
if(i%2==0)
{
circle(500,200+y,7);
line(500,207+y,500,217+y);
line(500,207+y,495,212+y);
line(500,207+y,505,212+y);
line(500,217+y,492,225+y);
line(500,217+y,508,225+y);
}
else
{
circle(500,204-y,7);
line(500,211-y,500,221-y);
line(500,211-y,495,216-y);
line(500,211-y,505,216-y);
line(500,221-y,492,229-y);
line(500,221-y,508,229-y);

}
//player 9 
if(i%2==0)
{
circle(950,160+y,7);
line(950,167+y,950,177+y);
line(950,167+y,945,172+y);
line(950,167+y,955,172+y);
line(950,177+y,942,185+y);
line(950,177+y,958,185+y);
}
else
{
circle(950,164-y,7);
line(950,171-y,950,181-y);
line(950,171-y,945,176-y);
line(950,171-y,955,176-y);
line(950,181-y,942,189-y);
line(950,181-y,958,189-y);
}
//player 10

if(i<=150)
{
circle(200+i,450-i,7);
line(200+i,457-i,200+i,467-i);
line(200+i,457-i,195+i,462-i);
line(200+i,457-i,205+i,462-i);
if(i%2==0)
{
line(200+i,467-i,195+i,475-i);
line(200+i,467-i,205+i,475-i);	
}
else
{
line(200+i,467-i,190+i,475-i);
line(200+i,467-i,200+i,475-i);
}
}
else if(i>150 && i<=185)
{
		
circle(350+x,300,7);
line(350+x,307,360+x,307);
line(350+x,307,355+x,302);
line(350+x,307,355+x,312);
line(360+x,307,365+x,307);
line(360+x,307,365+x,302);
x++;
}
else
{	
circle(385,300,7);
line(385,307,385,317);
line(385,307,380,312);
line(385,307,390,312);
line(385,317,377,325);
line(385,317,393,325);
}



//player 11
if(i%2==0)
{
circle(900,450+y,7);
line(900,457+y,900,467+y);
line(900,457+y,895,462+y);
line(900,457+y,905,462+y);
line(900,467+y,892,475+y);
line(900,467+y,908,475+y);
}
else
{
circle(900,454-y,7);
line(900,461-y,900,471-y);
line(900,461-y,895,466-y);
line(900,461-y,905,466-y);
line(900,471-y,892,479-y);
line(900,471-y,908,479-y);
}
//player 12
if(i%2==0)
{
circle(200,160+y,7);
line(200,167+y,200,177+y);
line(200,167+y,195,172+y);
line(200,167+y,205,172+y);
line(200,177+y,192,185+y);
line(200,177+y,208,185+y);
}
else
{
	
circle(200,164-y,7);
line(200,171-y,200,181-y);
line(200,171-y,195,176-y);
line(200,171-y,205,176-y);
line(200,181-y,192,189-y);
line(200,181-y,208,189-y);

}
//player 13
if(i%2==0)
{	
circle(460,230+y,7);
line(460,237+y,460,247+y);
line(460,237+y,465,242+y);
line(460,237+y,455,242+y);
line(460,247+y,468,255+y);
line(460,247+y,452,255+y);
}
else
{
	circle(460,234-y,7);
line(460,241-y,460,251-y);
line(460,241-y,465,246-y);
line(460,241-y,455,246-y);
line(460,251-y,468,259-y);
line(460,251-y,452,259-y);

}
//player 14
if(i<=460)
{
circle(565-i,275,7);
line(565-i,282,565-i,292);
line(565-i,282,570-i,287);
line(565-i,282,560-i,287);
if(i%2==0)
{
line(565-i,292,560-i,300);
line(565-i,292,573-i,300);	
}else 
{
line(565-i,292,567-i,300);
line(565-i,292,569-i,300);
}
}
else
{
circle(105,275,7);
line(105,282,105,292);
line(105,282,100,287);
line(105,282,110,287);
line(105,292,97,300);
line(105,292,113,300);
}
a++;
delay(50);
cleardevice();
}
settextstyle(3,0,6);
setcolor(WHITE);
outtextxy(500,300,"GOAL");
delay(1000);
outtextxy(400,400,"PSG 0-1 ManU");
delay(200);
	// settextstyle(3,0,3);
	// setcolor(WHITE);
	// outtextxy(600,700,"Get rickrolled lol");
	// PlaySound(TEXT("Rick.wav"),NULL,SND_ASYNC);
	// //system("pause");	
	// Sleep(15000);
	// PlaySound(NULL,0,0);
getch();
closegraph();
}
