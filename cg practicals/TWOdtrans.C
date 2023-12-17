#include <graphics.h>
#include <conio.h>
#include <stdio.h>

void drawTriangle(int x1, int y1, int x2, int y2,int x3,int y3) {
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
     line(x3, y3, x1, y1);
}

void translateTriangle(int *x1, int *y1, int *x2, int *y2, int *x3, int *y3,int tx, int ty)

{
    *x1 += tx;
    *y1 += ty;
    *x2 += tx;
    *y2 += ty;
    *x3 += tx;
    *y3 += ty;
}

int main() {
    int gd = DETECT, gm;
    int x1 = 100, y1 = 100, x2 = 200, y2 = 100,x3 = 150, y3 = 50;
	int tx=50,ty=50;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw the original rectangle
    drawTriangle(x1, y1, x2, y2,x3,y3);

   

    // Perform translation
    translateTriangle(&x1, &y1, &x2, &y2, &x3, &y3, tx, ty);

    // Draw the translated rectangle
    setcolor(RED);
    drawTriangle(x1, y1, x2, y2, x3, y3);

    getch();
    closegraph();
    return 0; 
}
