#include <stdio.h>

int main(){
  int fr, cel; 
  printf("THis is the program to convert the temperature from farheniet to celcius!!!\n");
  printf("ENter the temperature in Farhaneit: ");
  scanf("%d", &fr);
  cel = (5 * (fr - 32))/9;
  printf("the temperature in Celcius is %d.\n", cel);
  return 0;
}
