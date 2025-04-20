#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setbkcolor(CYAN);
    cleardevice();

    setcolor(YELLOW);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);
    outtextxy(250, 200, "Mahendra");

    setcolor(MAGENTA);
    rectangle(100, 100, 500, 400);

    getch();
    closegraph();

    return 0;
}

