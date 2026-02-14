// Task 2 : Basic Menu Selection
// Write a C program that displays the following menu : 1. Add 2. Subtract 3. Multiply 4. Divide

//      Ask the user to enter an option(1–4).Using a switch - case,
//     input two integers using scanf,
//     then perform and display the correct operation.Sample Output:

//     1. Add 2. Subtract 3. Multiply 4. Divide
//     Enter your choice(1 - 4) :
//      Enter first numbers :
//      Enter second numbers :
//      Result :
// Mqake a basic calculator
#include <stdio.h>
int main()
{

  float num1, num2,add,subtract,multiply,divide;
  int choice;
  printf("1:Add\n");
  printf("2:Subtract\n");
  printf("3:Multipply\n");
  printf("4:Divide\n");
  printf("Enter your choice:");
  scanf("%d", &choice);

printf("Enter your First number:");
scanf("%f",&num1);
printf("Enter your Second number:");
scanf("%f",&num2);


  switch (choice)
  {

  case 1:
  {
    add = num1 + num2;
    printf("The sum is:%.2f",add);
    break;
  }
  case 2:
  {
    subtract = num1 - num2;
    printf("The subtract is:%.2f",subtract);
    break;
  }
  case 3:
  {
    multiply = num2 * num2;
    printf("The multiplication is:%.2f",multiply);
    break;
  }
  case 4:
  {
    if (num2 != 0)
    {
      divide = num1 / num2;
      printf("The diviision is:%.2f",divide);
    }
    else
    {
      printf("Can not divide by 0");
    }
    break;
  }
  default:{
    printf("Invaild Error");
  }
  }

  return 0;
}