#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x = 0, y = 300;
    int width = 200, height = 60;

    initgraph(&gd, &gm, "");

    while (!kbhit()) {
        cleardevice();

        setcolor(RED);
        rectangle(x, y, x + width, y + height);

        setcolor(BLUE);
        circle(x + 50, y + height, 20);
        circle(x + 150, y + height, 20);

        setcolor(YELLOW);
        settextstyle(BOLD_FONT, HORIZ_DIR, 3);
        outtextxy(x + 70, y - 30, "Mahendra");

        delay(50);

        x += 5;

        if (x > getmaxx()) {
            x = -width;
        }
    }

    closegraph();
    return 0;
}

