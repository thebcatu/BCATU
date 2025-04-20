#include <stdio.h>

int main() {
    float length = 5.0, width = 3.0;
    float area, perimeter;

    area = length * width;
    perimeter = 2 * (length + width);

    length += 2.0;
    width += 1.0;

    area *= 2;
    perimeter *= 1.5;

    printf("Updated Length: %.2f\n", length);
    printf("Updated Width: %.2f\n", width);
    printf("Updated Area: %.2f\n", area);
    printf("Updated Perimeter: %.2f\n", perimeter);

    return 0;
}

