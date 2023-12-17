#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Drawing a circle
    circle(200, 200, 100);

    // Display the circle for 5 seconds
    delay(5000);

    // Close the graphics window
    closegraph();

    return 0;
}
