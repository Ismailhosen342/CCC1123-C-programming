#include <stdio.h>

int a, b, c, choice;

void menu()
{
  printf("\n1. Add");
  printf("\n2. Subtract");
  printf("\n3. Multiply");
  printf("\n4. Divide");
  printf("\n0. Exit\n");
}
void input(){
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
}
void add()
{
  input();
  c = a + b;
  printf("Result: %d\n", c);
}

void sub()
{
  input();
  c = a - b;
  printf("Result: %d\n", c);
}

void multi()
{
 input();
  c = a * b;
  printf("Result: %d\n", c);
}

void divide()
{
 input();
  if (b != 0)
  {
    c = a / b;
    printf("Result: %d\n", c);
  }
  else
  {
    printf("Error! Division by zero.\n");
  }
}

int main()
{
  do
  {
    menu();
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      add();
      break;
    case 2:
      sub();
      break;
    case 3:
      multi();
      break;
    case 4:
      divide();
      break;
    case 0:
      printf("Exiting program...\n");
      break;
    default:
      printf("Invalid choice!\n");
    }

  } while (choice != 0);

  return 0;
}
//this is just basic calculator just use function and  switch case