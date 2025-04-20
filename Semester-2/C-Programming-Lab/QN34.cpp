#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setcolor(RED);
    circle(320, 240, 100);

    setcolor(BLUE);
    rectangle(100, 100, 500, 300);

    setcolor(GREEN);
    int points[] = {400, 100, 500, 200, 300, 200};
    fillpoly(3, points);

    getch();

    closegraph();

    return 0;
}

