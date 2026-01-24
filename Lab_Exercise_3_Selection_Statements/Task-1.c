// Exercise 1.1
// Write a C program that accepts an integer number and checks if it is positive.
// Display “The number is positive” if true. Otherwise, do nothing.

// #include <stdio.h>
// int main()
// {
//   int num;
//   printf("Enter any number:");
//   scanf("%d", &num);

//   if (num > 0)
//   {
//     printf("The number is positive");
//   }

//   return 0;
// }

// Exercise 1.2 Write a C program to read an integer and check
// whether it is even or odd.If it is even, print
// The number is even.” Otherwise, print(The number is odd”)

#include <stdio.h>
int main()
{
  int num1;
  printf("Enter any number:");
  scanf("%d", &num1);

  if (num1 % 2 == 0)
  {
    printf("You entered even number.");
  }
  else
  {
    printf("You entered odd number.");
  }
  
  return 0;
}
