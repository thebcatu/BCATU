#include <stdio.h>

int main() {
    FILE *fp;
    int arr[] = {10, 20, 30, 40, 50};
    int i, size = sizeof(arr) / sizeof(arr[0]);

    fp = fopen("data.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(arr, sizeof(int), size, fp);
    fclose(fp);

    fp = fopen("data.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    long fileSize = ftell(fp);
    for (i = size - 1; i >= 0; i--) {
        fseek(fp, i * sizeof(int), SEEK_SET);
        int value;
        fread(&value, sizeof(int), 1, fp);
        printf("%d ", value);
    }
    printf("\n");

    fclose(fp);
    printf("Operation successful.\n");
    return 0;
}

