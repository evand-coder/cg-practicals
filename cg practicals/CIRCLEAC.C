#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h> // Corrected header inclusion

#define PI 3.14159265

int main() {
    int gd = DETECT, gm;
    int midx, midy, radius = 100;
    double angle = 0;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    midx = getmaxx() / 2; // Corrected variable name
    midy = getmaxy() / 2; // Corrected variable name

    while (!kbhit()) { // Corrected while loop syntax
        int x = midx + (int)((radius + 10) * cos(angle * PI / 180));
        int y = midy + (int)((radius + 10) * sin(angle * PI / 180));

        cleardevice();
        circle(midx, midy, radius);
        circle(x, y, 10);
        angle += 2;
        delay(50);
    }

    getch();
    closegraph();
    return 0;
}
