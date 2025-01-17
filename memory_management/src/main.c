#include <stdio.h>

int main(void) {
    int age = 38;

    // In C, you can print the address of a variable by using the
    // address-of-operator: &. Here's an example:
    printf("The address of age is: %p\n",
           &age); // The address of age is: 0x16b4b6fb8

    return 0;
}

// int main(void) {
//     int age = 38;

//     // In C, you can print the address of a variable by using the
//     // address-of-operator: &. Here's an example:
//     printf("The address of age is: %p\n",
//            &age); // The address of age is: 0x16b4b6fb8

//     return 0;
// }