/*void printAddress(int *n);
int main() {
   int n = 4;
  printAddress(&n);
  printf("Address of n is :%u\n",&n);
    return 0;
    }
  void printAddress(int *n) {
  printf("Address of n is :%u\n", n);
  }
   Will the address output be same (call by Referance) ? */
#include <stdio.h>
  void printAddress(int *n);
int main() {
   int n = 4;
  printAddress(&n);
  printf("Address of n is :%u\n",&n);
    return 0;
    }
  void printAddress(int *n) {
  printf("Address of n is :%u\n", n);
  }
