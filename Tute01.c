/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int s1, s2, total;
  float avg;

  printf("Enter marks of sub1: ");
  scanf("%d", &s1);
  printf("Enter marks of sub2: ");
  scanf("%d", &s2);

  total = s1 + s2;
  avg = total / 2;

  printf("average is %.2f", avg);
  
  return 0;
}

