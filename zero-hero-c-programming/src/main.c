// invoking the preprocessor
// copying the header file in out code
// giving us functions like printf
#include <stdio.h>

// include local file header
#include "math.h"

int main() {
  printf("Hello, World!\n");
  int a = 15;
  int b = 18;

  printf("a is %d, b is %d -> a + b is %d\n", a, b, add(a, b));

  return 0;
}
