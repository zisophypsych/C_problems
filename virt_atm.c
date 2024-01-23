#include <stdio.h>
#include <math.h>

int main(){
  int amount, hundred, ten, fifty;
  printf("Hey! This is the virtual cashier!\n");
  printf("Enter the amount you want to withdraw in Rs. ");
  scanf("%d", &amount);
  hundred = floor((float)amount/100);
  fifty = floor((float)(amount - (hundred*100))/50);
  ten = floor((float)(amount - (hundred*100)-(fifty*50))/10);
  printf("You will get %d, %d, %d notes of 100, 50, 10 Rupees Respectivly!!!\n", hundred, fifty, ten);
  return 0;
}
