// Task 3 : Function and Looping Modify Task 1 so that it uses a looping statement which repeatedly executes until the user chooses to stop.The program must prompt the user during each iteration to press the character ‘N’(uppercase) if they wish to terminate the loop.If the user enters any other character,  the loopshould continue running.

// Write a program that defines three separate functions with arguments to perform
// arithmetic operations on three integers entered by the user:
// 1. addNumbers(int a, int b) → returns the sum of the first two numbers.
// 2. multiplyNumbers(int sum, int c) → returns the product of the sum and the
// third number.
// 3. subtractNumber(int product, int c) → returns the result of subtracting the
// third number from the product.

#include <stdio.h>
int a, b, c, sum, product, substract;

void takeinput()
{
  printf("Enter Your first number:");
  scanf("%d", &a);
  printf("Enter Your second number:");
  scanf("%d", &b);
  printf("Enter Your third number:");
  scanf("%d", &c);

  return;
}

int addnumbers(int a, int b)
{
  return a + b;
}

int multiply(int c, int sum)
{

  return c * sum;
}

int subs(int c, int product)
{

  return product - c;
}

int main()
{
  char ch;
  
  do{
  takeinput();
  sum = addnumbers(a, b);
  printf("sum:%d\n", sum);

  product = multiply(c, sum);
  printf("Product:%d\n", product);

  substract = subs(c, product);
  printf("Division:%d\n", substract);
  printf("Enter N to continue any other key to  stop:");
  scanf(" %c",&ch);
}while (ch!='N');
 

  return 0;
}
