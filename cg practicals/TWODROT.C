#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2;
double degree,radian;
int rotated_x,rotated_y;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
cleardevice();
printf("\t\t*********** ROTATION *********** \n");
printf("\n Enter an initial coordinates of the line = ");
scanf("%d %d",&x1,&y1);
printf("\n Enter a final coordinates of the line = ");
scanf("%d %d",&x2,&y2);
line(x1,y1,x2,y2);
printf("\n\n Now, Enter a degree = ");
scanf("%lf",&degree);
radian=degree*0.01745;
rotated_x=(int)(x1+((x2-x1)*cos(radian)-(y2-y1)*sin(radian)));
rotated_y=(int)(y1+((x2-x1)*sin(radian)+(y2-y1)*cos(radian)));
setcolor(RED);
line(x1,y1,rotated_x,rotated_y);
getch();
closegraph();
}