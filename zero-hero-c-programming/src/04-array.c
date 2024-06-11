#include <stdio.h>

// its good practice to #(pound) define a variable
#define MAX_IDS 32
#define EXERCISE_ARR_LENGTH 10

int array04() {
  printf("04 array\n");
  // Array is a block of memory where the type of the memory
  // describes how big each element of the array is
  int ids[MAX_IDS] = {0, 1, 2};

  // let the compiler infer the array length
  // int ids[] = {1, 2, 3};

  printf("%d\n", ids[2]);

  ids[3] = 0x41;

  printf("%d\n", ids[3]);

  printf("04 exercise\n");

  int myArr[EXERCISE_ARR_LENGTH];
  myArr[3] = 2;
  printf("%d\n", myArr[3]);

  return 0;
}