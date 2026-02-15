// Task 3 Write a C program that :
// 1. Declares an integer variable num
// 2. Declares a pointer p
// 3. Uses scanf() to read a number from the user using the pointer
// 4. Displays : Dispplay Valus and memory address

#include <stdio.h>
int main()
{
  int num;
  int *p;
  p = &num;
  printf("Enter your Number:");
  scanf("%d", p);
  printf("You entererd:%d\n", num);
  printf("The address:%p",p);

  return 0;
}