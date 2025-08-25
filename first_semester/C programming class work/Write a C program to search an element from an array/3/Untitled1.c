#include <stdio.h>

int main() {
  int x[10], i, y;
  printf("Enter 10 data: ");
  for (i = 0; i < 10; ++i) {
    scanf("%d", &x[i]);
  }
  {
    printf("Element to be searched: ");
    scanf("%d", &y);
  }
  for (i = 0; i < 10; ++i) {
    if (y == x[i]) {
      printf("Element is found at position %d\n", i);
      break; // Exit the loop if element is found
    } else if (i == 9) { // Check if last iteration
      printf("Not found\n");
    }
  }
  return 0;
}

