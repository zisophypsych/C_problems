#include <stdio.h>
#include <math.h>

int main(){
  int num, first ,sec,third,fourth,last, n_num;
  printf("This program will add 1 to all the digits of entered 5 digit number!!!\n");
  printf("Enter the 5-digit number: ");
  scanf("%d", &num);
  first = floor((float)num/10000);
  sec = (int)(floor((float)num/1000)) % 10; 
  third = (int)(floor((float)num/100)) % 10; 
  fourth = (int)(floor((float)num/10)) % 10;
  last = num % 10;
  n_num = ((first+1)*10000) + ((sec+1)*1000) + ((third+1)*100) + ((fourth+1)*10) + (last+1);
  printf("The new number after adding 1 to each of the digits of the entered 5-digit number is %d.\n", n_num);
  return 0;
}
