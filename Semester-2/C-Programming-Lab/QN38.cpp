#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    char choice;
    int x = 320, y = 240, radius = 50;
    int left = 100, top = 100, right = 500, bottom = 300;

    initgraph(&gd, &gm, "");

    setcolor(WHITE);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);
    outtextxy(100, 20, "Mahendra's Graphics Lab");

    while (1) {
        setcolor(WHITE);
        rectangle(0, 40, getmaxx(), getmaxy());
        setcolor(BLACK);
        
        outtextxy(100, 60, "Choose shape to draw: ");
        outtextxy(100, 90, "Press 'C' for Circle, 'R' for Rectangle, 'L' for Line");
        
        choice = getch();

        if (choice == 'C' || choice == 'c') {
            setcolor(RED);
            circle(x, y, radius);
        } else if (choice == 'R' || choice == 'r') {
            setcolor(BLUE);
            rectangle(left, top, right, bottom);
        } else if (choice == 'L' || choice == 'l') {
            setcolor(GREEN);
            line(left, top, right, bottom);
        }

        outtextxy(100, 120, "Press any other key to continue or ESC to exit.");

        if (choice == 27) {
            break;
        }
    }

    closegraph();
    return 0;
}

