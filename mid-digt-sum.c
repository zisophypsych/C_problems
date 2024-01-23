#include <stdio.h>
#include <math.h>

int main(){
  int sec, third, sum,num;
  printf("Program to find the sum of middle two digits of the entered 4 digit number!!!\n");
  printf("Enter the 4 digit number: ");
  scanf("%d", &num);
  sec = (int)(floor((float)num/100)) % 10;
  third = (int)(floor((float)num/10)) % 10;
  sum = sec + third;
  printf("Sum of middle two digits is %d.\n",sum);
  return 0;
}
