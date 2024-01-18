#include <stdio.h>
int main(){
  int a,b;
  printf("This is the program for adding two numbers!\n");
  printf("Enter the First Number: ");
  scanf("%d", &a);
  printf("Enter the second Number: ");
  scanf("%d", &b);
  int tot = a+b;
  printf("Sum of %d and %d is %d\n", a,b,tot);

}
