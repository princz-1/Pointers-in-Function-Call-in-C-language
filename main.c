#include <stdio.h>
void square(int n);
void _square(int*n);
int main(void) {
  int number = 4;
  square(number);
  printf("number is :%d\n",number);

  _square(&number);
  printf("number is :%d\n",   number);
  return 0;
}
// Call by value 
void square(int n){
  n = n * n;
  printf( "square is :%d\n",n);
}

//Call by referance
void _square(int*n){
  *n = (*n) * (*n);
  printf("Square is :%d\n",*n);
}