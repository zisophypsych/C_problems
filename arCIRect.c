#include <stdio.h>

int main(){
  float radius, length, breadth, ar_cir, ar_rec;
  printf("This is the program to calculate the Area of Circle and Rectangle!!!\n");
  printf("Enter the radius of Circle in cm: ");
  scanf("%f", &radius);
  // pi = 3.14
  ar_cir = 3.14 * (radius * radius);

  printf("Enter the Length of the Rectangle in cm: ");
  scanf("%f", &length);
  printf("Enter the Breadth of the Rectangle in cm: ");
  scanf("%f", &breadth);
  ar_rec = length * breadth;

  printf("The Area of Circle whose radius is %.2f cm is %.2f cm, (pi = 3.14).\n", radius, ar_cir);
  printf("The area of rectangle whose length = %.2f cm and breadth = %.2f cm is %.2f cm.", length, breadth, ar_rec);
  return 0;
}
