#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, dx, dy, step, i;
    float x, y, xin, yin;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    printf("enter the values of x1 and y1  ");
    scanf("%d%d", &x1, &y1);
    printf("enter the values of x2 and y2  ");
    scanf("%d%d", &x2, &y2);

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    if (dx >= dy)
        step = dx;
    else
        step = dy;

    xin = (float)dx / step;
    yin = (float)dy / step;

    x = x1;
    y = y1;

    i = 1;
    while (i <= step) {
        putpixel(x, y, 5);
        x = x + xin;
        y = y + yin;
        i = i + 1;
        delay(10);
    }

    getch();
    closegraph();
    return 0;
}
