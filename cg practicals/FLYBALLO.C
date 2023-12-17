#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>

void drawBalloon(int x, int y, int color) {
    setcolor(color);
    circle(x, y, 20);
    line(x, y + 20, x, y + 50);
}

int main() {
    int gd = DETECT, gm;
    int maxX, maxY;
    int x1 = 100, y1 = 500;
    int x2 = 200, y2 = 550;
    int x3 = 300, y3 = 480;
    int color1 = RED, color2 = BLUE, color3 = GREEN;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    maxX = getmaxx();
    maxY = getmaxy();

    while (!kbhit()) {
        cleardevice();
        drawBalloon(x1, y1, color1);
        drawBalloon(x2, y2, color2);
        drawBalloon(x3, y3, color3);
        
        y1 -= 2;
        y2 -= 1;
        y3 -= 3;

        delay(20);
    }

    getch();
    closegraph();
    return 0;
}
