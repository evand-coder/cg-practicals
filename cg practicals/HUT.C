
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main() {
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Drawing a hut");
line(150,100,50,200);
line(150, 100, 350, 100);
line(150, 100, 300, 200);
line(300, 200, 500, 200);
line(350, 100, 500, 200);
line(50, 200, 300, 200);
rectangle(50, 200,500,200);
rectangle(300,200,500,400);
rectangle(50,200,300,400);
rectangle(300,200,300,200);
rectangle(140,270,250,340);
line(140,305,250,305);
line(195,270,195,340);
rectangle(380,300,450,400);

circle(153,160,33);
circle(443,350,5);
getch();
closegraph();}