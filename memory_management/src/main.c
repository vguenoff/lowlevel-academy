#include <stdio.h>

// Variables are human readable names that refer to some data in memory.
// Memory is a big array of bytes, and data is stored in the array.

int main(void) {
    int age = 38;
    int *age_ptr = &age;

    printf(
        "\n---\nPointers are 3 things:\n\n1. Address of a value. "
        "(age_ptr = %p)\n2. Value "
        "pointed to by. (*age_ptr = %d)\n3. Own address. (&age_ptr = %p)\n\n",
        age_ptr, *age_ptr, &age_ptr);

    int other_age = *age_ptr;
    printf("age = %d, other_age = %d\n", age, other_age);
    other_age += 1;
    printf("age = %d, other_age = %d\n", age, other_age);

    return 0;
}
