#include <stdio.h>

int width = 10, length = 12;
char unit[3] = "CM";

int main() {
  int area = width * length;

  printf("width: %d%s\n", width, unit);
  printf("Length: %d%s\n", length, unit);
  printf("Area: %d\n", area);
  return 0;
}
