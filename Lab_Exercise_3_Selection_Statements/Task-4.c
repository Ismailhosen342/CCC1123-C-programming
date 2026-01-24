// Task 4 : Using Nested if Statement Exercise
// 4.1 : Student membership fee
// A library charges subscription fees based on age and membership type :

// #include <stdio.h>
// int main()
// {
//   int age, student;

//   printf("Enter your age:");
//   scanf("%d", &age);
//   printf("Are you student(1-for yes & 0-for no):");
//   scanf("%d", &student);

//   if (age >= 18 && student == 1)
//   {
//     printf("Fee = RM10");
//   }
//   else if (age >= 18 && student == 0)
//   {
//     printf("Fee = RM20");
//   }
//   else if (age <= 18 && student == 1)
//   {
//     printf("Fee = RM5");
//   }
//   else if (age <= 18 && student == 0)
//   {
//     printf("Fee = RM8");
//   }

//   return 0;
// }

// Exercise 4.2: Loan Approval System
// Write a C program that checks loan eligibility using nested if statements.
// Conditions:
//  - The applicant must be employed.
//  - If employed, check the salary:
//  • If salary >= 3000 → Eligible for loan
//  • otherwise → Not eligible
//  - If not employed → Not eligible

#include <stdio.h>
#include <string.h>
int main()
{
  char employe[4];
  int salary;
  printf("Are you employed? (yes/no)");
  scanf("%s", employe);
  printf("Enter your monthly salary:");
  scanf("%d", &salary);

  if (strcmp(employe, "yes") == 0 || strcmp(employe, "Yes") == 0)
  {
    if (salary >= 3000)
    {
      printf("Eligible for loan.");
    }
    else
    {
      printf("Nor eligible");
    }
  }
  else
  {
    printf("Nor eligible");
  }
  return 0;
}
