// Task 3 : Using interactive input and Conditional Statements
// Write a C program that reads three test marks from the user,calculates the average,
// and determines the grade based on the following conditions:

#include <stdio.h>
int main()
{
  float test1, test2, test3, total, average;
  printf("Enter mark for test1:");
  scanf("%f", &test1);
  printf("Enter mark for test2:");
  scanf("%f", &test2);
  printf("Enter mark for test3:");
  scanf("%f", &test3);

  total = test1 + test2 + test3;
  average = total / 3;
  printf("Average:%.2f\n", average);

  if (average >= 80 && average <= 100)
  {

    printf("Grade:A");
  }

  else if (average >= 60 && average <= 79)
  {

    printf("Grade:B");
  }

  else if (average >= 40 && average <= 59)
  {

    printf("Grade:B");
  }
  else
  {
    printf("Grade:D");
  }
  return 0;
}