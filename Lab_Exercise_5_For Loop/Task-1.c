// Tasks
// 1. Write a program that accepts an integer N and uses a for loop to display all even
// numbers from 1 to N. Also display the total count.

#include <stdio.h>
int main()
{
  int n, i, count = 0;
  printf("Enter Your Number:");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
      count++;
    }
  }
  printf("Total even numbers:%d", count);
  return 0;
}