#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

#define PI 3.14159265

int main() {
    int gd = DETECT, gm;
    int xc, yc;
    int radius = 50;
    int maxRadius = 100;
    int increment = 1;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    xc = getmaxx() / 2;
    yc = getmaxy() / 2;

    while (!kbhit()) {
        cleardevice();
        circle(xc, yc, radius);
        radius += increment;

        if (radius >= maxRadius || radius <= 10) {
            increment = -increment;
        }

        delay(50);
    }

    getch();
    closegraph();
    return 0;
}
