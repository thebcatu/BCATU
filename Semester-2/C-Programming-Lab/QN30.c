#include <stdio.h>

union Data {
    int i;
    float f;
};

struct Register {
    unsigned int status : 1;
    unsigned int mode : 2;
    unsigned int reserved : 5;
};

int main() {
    union Data d;
    d.i = 10;
    printf("Using union - Integer: %d\n", d.i);
    d.f = 5.5;
    printf("Using union - Float: %.2f\n", d.f);
    printf("After assigning float, integer becomes: %d (shared memory)\n", d.i);

    struct Register reg;
    reg.status = 1;
    reg.mode = 2;

    printf("Register - Status: %u, Mode: %u\n", reg.status, reg.mode);

    printf("Size of union: %lu bytes\n", sizeof(d));
    printf("Size of structure with bit-fields: %lu bytes\n", sizeof(reg));

    return 0;
}

