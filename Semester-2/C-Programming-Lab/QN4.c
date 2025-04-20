#include <stdio.h>

#define PI 3.14
#define AREA(radius) (PI * (radius) * (radius))

#define DEBUG

int main() {
    float radius = 5.0;
    float area = AREA(radius);

    printf("Area of circle with radius %.2f is %.2f\n", radius, area);

#ifdef DEBUG
    printf("Debug mode is enabled.\n");
#endif

    return 0;
}

