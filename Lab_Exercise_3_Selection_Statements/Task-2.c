// Task 2 : Using if... else Statement(with Multiple Conditions)
// Exercise 2.1 : Determine the Largest Number
// Write a C program that reads three integers from the user and determines which number is
// the largest.Use if... else with multiple conditions(&&) to compare the numbers.

// #include <stdio.h>
// int main()
// {
//   float num1, num2, num3;
//   printf("Enter first number:");
//   scanf("%f", &num1);

//   printf("Enter Second number:");
//   scanf("%f", &num2);

//   printf("Enter third number:");
//   scanf("%f", &num3);

//   if ((num1 > num2) && (num1 > num3))
//   {
//     printf("The greater number is:%.2f", num1);
//   }
//   else if ((num2 > num1) && (num2 > num3))
//   {
//     printf("The greater number is:%.2f", num2);
//   }
//   else
//   {
//     printf("The greater number is:%.2f", num3);
//   }

//   return 0;
// }

// Exercise 2.2 : Check Student Eligibility
// Write a C program to determine whether a student is eligible to take the final exam based
// on these conditions : -The student must have an attendance of at least 80 %
// The student must have a carry mark of 40 or more
// Use if... else with logical AND(&&) and OR(||) operators to test both conditions.

#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter attendance percentage:");
  scanf("%d", &a);

  printf("Enter carry mark:");
  scanf("%d", &b);

  if (a >= 80 && b >= 40)
  {
    printf("Congratulation! You are eligable for exam.");
  }
  else
  {

    printf("Sorry You are not eligable for exam");
  }

  return 0;
}