#include <stdio.h>
#include <math.h>

int main(){
  printf("This is program to reverse the entered 4 digit number!!!\n");
  int num, first,sec,third,last,rev;
  printf("Enter the 4 digit number: ");
  scanf("%d", &num);
  first = floor((float)num/1000);
  sec = (int)(floor((float)num/100)) % 10;
  third = (int)(floor((float)num/10)) % 10;
  last = num % 10;
  rev = (last*1000) + (third*100) + (sec*10) + first;
  printf("Reverse number would be %d.\n", rev);
  return 0;
}
