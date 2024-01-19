#include <stdio.h>

int main(){
  float mark, average, sum = 0.0;
  int subjects, i;
  printf("This is the program to find the average marks!!!\n ");
  printf("Enter the number of subjects you have: ");
  scanf("%d", &subjects);
  for( i = 1; i <= subjects; i++){
    printf("Enter the marks of subject %d. ", i);
    scanf("%f", &mark);
    sum += mark;
  }
  
  average = sum/subjects;
  printf("The average marks of %d subjects is %.2f\n", subjects, average);

  return 0;
}
