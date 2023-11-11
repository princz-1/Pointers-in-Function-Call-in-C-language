/*void printAddress(int n);
  int main() {
  int n = 4;
  printf("%p\n",&n);
  printAddress(n);
  return 0;
  }
void printAddress(int n) {
printf("%p\n", &n);
}
   Will the address output be same (call by Value)? */
#include <stdio.h>
  void printAddress(int n);
int main() {
   int n = 4;
  printf("%u\n",&n);
  printAddress(n);
    return 0;
    }
  void printAddress(int n) {
  printf("%u\n", &n);
  }
