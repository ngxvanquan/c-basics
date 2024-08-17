#include <stdio.h>

int myArray[] = {1, 5, 9, 2, 20, 5, 3, 8, 4, 9};
int min = 0;

int main() {
  for (int i = 0; i < (sizeof(myArray) - 1); i++) {
    if (myArray[i] > min) {
      myArray[i] = min; 
    }
  }

  for (int i = 0; i < (sizeof(myArray) - 1); i++) {
    printf("%d", myArray[i]);
  }

  return 0;
}
