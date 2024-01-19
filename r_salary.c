#include <stdio.h>

int main(){
  float bs,gs, da=0.0, ra=0.0; 
  printf("This is the program to find Raj's gross salary where his dearness allowance is 40%% and rent allowance is 20%!!!\n");
  printf("Enter Raj's Basic salary: ");
  scanf("%f", &bs);
  da = (40.0/100.0)*bs;
  ra = (20.0/100.0)*bs;
  gs = da + ra + bs;
  printf("Raj's Gross salary is %.2f\n", gs);
  return 0;
}
