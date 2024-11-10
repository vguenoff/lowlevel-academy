#include <stdio.h>

int conditionalStatements06() {
  printf("06 conditional statements\n");

  int temp;
  printf("1234 What temperature is it? ");
  scanf("%d", &temp);

  if (temp >= 70) {
    printf("dang brother, it's hot!\n");
  } else if (temp >= 30 && temp < 70) {
    printf("dang brother, it's mild.\n");
  } else {
    printf("dang brother, it's cold..\n");
  }

  return 0;
}