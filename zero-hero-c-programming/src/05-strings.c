#include <stdio.h>

#define MAX_IDS 32

int strings05() {
  printf("05 strings\n");

  // int ids[MAX_IDS] = {0, 1, 2};

  // String actually is under the hood an array of characters
  // String in C are null-terminated
  // If we don't have the 0 at the end and there is additional data
  // at the end of the 'o' the program will print the information
  // there and it could allow hacking
  char myStr[] = {'h', 'e', 'l', 'l', 'o', 0};
  // When we put a string in double quotes
  // The compiler does the null-terminating by default
  // We can think of strings like block of contiguous memory
  // of the same type
  char *myOtherStr = "world";

  printf("%s\n", myStr);
  printf("%s\n", myOtherStr);

  // String operations
  // strcpy(dest, src);
  // strncpy(dest, src, n);

  char name[50];

  printf("Enter your name: ");
  scanf("%s", name);

  printf("Hello %s!\n", name);

  return 0;
}