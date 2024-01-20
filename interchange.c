#include <stdio.h>

int main(){
  int C, D;
  printf("This is the program to interchange the values of the variables!!\n");
  printf("Enter the value of C: ");
  scanf("%d", &C);
  printf("Enter the value of D: ");
  scanf("%d", &D);
  int A = C;
  C = D;
  D = A;
  printf("After interchanging , Value of C is %d and value of D is %d.\n", C,D);
  return 0;
}
