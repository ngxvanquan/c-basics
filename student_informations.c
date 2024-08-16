#include <stdio.h>

char name[] = "HarutoNgugyen";
int age = 16;
float height = 1.6;
float weight = 45.2;
char country[] = "VietNam";

int main() {
  printf("Name: %s\n", name);
  printf("Age: %d\n", age);
  printf("Height %1.fM\n", height);
  printf("Weight %1.fM\n", weight);
  printf("Country: %s\n", country);
  
  return 0;
}
