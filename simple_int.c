#include <stdio.h>

int main(){
  float a,r,t,si;

  printf("This is the program to Find the Simple Interest with any interest rates, principle amount and during!!!!\n");
  printf("Enter the Principle Amount: ");
  scanf("%f", &a);
  printf("Enter the Interest Rate: ");
  scanf("%f", &r);
  printf("Enter the duration of the loan in Years: ");
  scanf("%f", &t);
  si = (a * r * t) / 100;
  printf("The Simple Interest For this Loan will be %.2f\n", si);
  return 0;
}
