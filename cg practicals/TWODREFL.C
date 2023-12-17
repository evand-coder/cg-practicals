#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
    int gm, gd = DETECT, ax;
    int x1 = 100, x2 = 100, x3 = 200, y1 = 100, y2 = 200, y3 = 100;
    char c;
    
    initgraph(&gd, &gm, "C:\\turboc3\\BGI");
    cleardevice();

    setcolor(14);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    printf("How do you want to perform reflection?\n");
    printf("Type 'x' along x axis or type 'y' along y axis: ");
    scanf(" %c", &c);

    if (c == 'x' || c == 'X')
    {
        setcolor(15);
        line(getmaxx() / 2, 50, getmaxx() / 2, getmaxy());
        setcolor(3);
        line(getmaxx() - x1, y1, getmaxx() - x2, y2);
        line(getmaxx() - x2, y2, getmaxx() - x3, y3);
        line(getmaxx() - x3, y3, getmaxx() - x1, y1);
    }
    else if (c == 'y' || c == 'Y')
    {
        setcolor(15);
        line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
        setcolor(2);
        line(x1, getmaxy() - y1, x2, getmaxy() - y2);
        line(x2, getmaxy() - y2, x3, getmaxy() - y3);
        line(x3, getmaxy() - y3, x1, getmaxy() - y1);
    }

    getch();
    closegraph();
}
