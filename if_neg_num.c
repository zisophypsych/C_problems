#include <stdio.h>

int main(){
  int num;
  printf("This programs tells whether the entered number is Postive or Negative!!!!\n");
  printf("Enter the number: ");
  scanf("%d", &num);
  if (num == 0){
    printf("Zero is neither Positive nor Negative.!!!\n");
  } else if (num > 0){
    printf("%d is a positive number!!\n", num);
  } else {
    printf("%d is a negative number!!\n", num);
  }
  return 0;
}
