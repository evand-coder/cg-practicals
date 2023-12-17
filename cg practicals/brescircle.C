//wap for bresenham circle algorithm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
int x,y,xc,yc,r,d;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("enter the center of the circle:");
scanf("%d%d",&xc,&yc);
printf("enter the radius of the circle:");
scanf("%d",&r);
d=3-2*r;
x=0;
y=r;
while(x<=y)
{
putpixel(x+xc,y+yc,WHITE);
putpixel(x+xc,-y+yc,WHITE);
putpixel(-x+xc,-y+yc,WHITE);
putpixel(-x+xc,y+yc,WHITE);
putpixel(y+xc,x+yc,WHITE);
putpixel(y+xc,-x+yc,WHITE);
putpixel(-y+xc,-x+yc,WHITE);
putpixel(-y+xc,x+yc,WHITE);
if(d<=0)
{
x=x+1;
d=d+4*x+6;
}
else
{
x=x+1;
y=y-1;
d=d+4*(x-y)+10;
}
}
getch();
return 0;
}
