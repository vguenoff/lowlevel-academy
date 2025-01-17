#include <stdio.h>

#define MAX_IDS 32

int loops07() {
    printf("07 loops 1\n");

    int ids[MAX_IDS] = {0};

    for (int i = 0; i < MAX_IDS; i += 1) {
        ids[i] = i * i;
        printf("%d: %d\n", i, ids[i]);
    }

    // while
    // do while

    return 0;
}
