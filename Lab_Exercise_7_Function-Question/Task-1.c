// Task 1 : Basic Function
// Write a C program that defines three functions without parameters. Each function
// should perform a simple task:
// 1. The first function should print a welcome message.
// 2. The second function should perform a basic arithmetic operation (for example,
// add two fixed numbers) and display the result.
// 3. The third function should print a goodbye message.
// Call all three functions in sequence inside the main() function.

#include <stdio.h>
int a, b, sum; //  I use global variable

void greet()
{
  printf("Welcome\n");
}


void add()
{
  printf("Enter first number:");
  scanf("%d", &a);
  printf("Enter second number:");
  scanf("%d", &b);
  sum = a + b;
  printf("Result:%d\n", sum);
}



void bye()
{
  printf("Good Bye!\n");
}
void thank(){
  printf("Thank you");
}


int main()
{
  greet();//Call function
  add();
  bye();
  thank();

  return 0;
}