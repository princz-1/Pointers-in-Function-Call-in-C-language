//Swap 2 numbers a&b (Call by Value)?
#include <stdio.h>
void swap(int a,int b);
int main(void) {
int x =3;
  int y =5;
  swap(x,y);
     printf("x =%d & y = %d\n",x,y);
  return 0;
}
void swap(int a,int b){
  int t;
  t = a;
  a = b;
  b = t;
  printf("a =%d & b = %d\n",a,b);
}
