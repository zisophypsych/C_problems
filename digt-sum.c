#include <stdio.h>
#include <math.h>

int main(){
  int num, first, last, sum;
  printf("Program to find the sum of first and last digit of the 4 digit entered Number!!!\n");
  printf("Enter the 4-digit Number: ");
  scanf("%d", &num);
  first = floor((float)num/1000);
  last = num - (floor((float)num/10) * 10);
  sum = first + last;
  printf("Sum of first(%d) and last(%d) digit of your given 4-digit number is \n :%d\n", first, last, sum);
  return 0;
}
