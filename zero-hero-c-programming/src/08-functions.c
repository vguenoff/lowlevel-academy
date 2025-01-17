#include <stdio.h>

int add(int x, int y) {
    int z = x + y;

    return z;
}

int functions08() {
    printf("08 functions\n");

    int otherInt = add(1, 2);

    printf("%d\n", otherInt);

    return 0;
}
