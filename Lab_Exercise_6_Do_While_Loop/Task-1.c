// Tasks
// 1. Write a program that accepts an integer N and uses a for loop to display all even
// numbers from 1 to N. Also display the total count.
// solve this using while Loop

// #include <stdio.h>
// int main()
// {
//   int n, i=1, count = 0;
//   printf("Enter Your Number:");
//   scanf("%d", &n);
//   while(i <= n)
//   {
//     if (i % 2 == 0)
//     {
//       printf("%d\n", i);
//       count++;
//     }
//     i++;
//   }
//   printf("Total even numbers:%d", count);
//   return 0;
// }

// Solving using Do while

#include <stdio.h>
int main()
{
  int n, i = 1, count = 0;
  printf("Enter Your Number:");
  scanf("%d", &n);

      do
      {
            if (i % 2 == 0)
            {
              printf("%d\n", i);
              count++;
            }
        i++;
      } while (i <= n);

  printf("Total even numbers:%d", count);
  return 0;
}