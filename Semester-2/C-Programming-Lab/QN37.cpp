#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int centerX = 320, centerY = 240;
    int radius = 100;
    int angle1 = 120, angle2 = 90, angle3 = 150;

    initgraph(&gd, &gm, "");

    setcolor(RED);
    pieslice(centerX, centerY, 0, angle1, radius);  // First slice (RED)

    setcolor(BLUE);
    pieslice(centerX, centerY, angle1, angle1 + angle2, radius);  // Second slice (BLUE)

    setcolor(GREEN);
    pieslice(centerX, centerY, angle1 + angle2, angle1 + angle2 + angle3, radius);  // Third slice (GREEN)

    setcolor(WHITE);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);
    outtextxy(220, 50, "Mahendra's Pie Chart");

    getch();
    closegraph();

    return 0;
}

