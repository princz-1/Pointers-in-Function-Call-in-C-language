//Swap 2 number a&b (Call by Referance) ?
#include <stdio.h>
void _swap(int *a,int *b);
int main(void) {
int x = 3;
  int y = 5;
  _swap(&x ,&y);
    printf("x = %d & y = %d\n",x,y);
  return 0;
}
//Call by Referance
void _swap(int *a,int *b){
  int t;
  t = *a;
  *a = *b;
  *b = t;
  printf("*a = %d & *b = %d\n",*a,*b);
}
