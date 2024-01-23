#include <stdio.h>
#include <math.h>

int main(){
  int num, first,sec,third,last,sum;
  printf("This is the program to find the sum of all digits of the entered 4-digit number!!!!\n");
  printf("Enter the 4-digit number: ");
  scanf("%d", &num);
  first = floor((float)num/1000);
  sec = (int)(floor((float)num/100)) % 10;
  third = (int)(floor((float)num/10)) % 10;
  last = num % 10 ;
  sum = first + sec + third + last;
  printf("Sum of all digits of the entered 4-digit number is %d.\n", sum);
  return 0;
}
