#include <stdio.h>
#include <math.h>

int main(){
  int num;
  printf("This program is to check whether a number is odd or even!!!\n");
  printf("Enter the number: ");
  scanf("%d", &num);
  if (num % 2 == 0){
    printf("%d is an Even Number!!!\n");
  } else {
    printf("%d is an Odd number!!!\n");
  }
  return 0;
}
