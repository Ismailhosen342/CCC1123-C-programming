// 2. Ask the user for N and print the following pattern using both for statement
//Solve this using While and Do-while loop

// #include <stdio.h>
// int main()
// {
//   int n,i=1;
//   printf("Enter Your Number");
//   scanf("%d", &n);

//     while(i <= n)
//     {
//       int j=1;
//         while(j<= i)
//         {
//           printf("*");
//           j++;
//         }
//       printf("\n");
//       i++;
//     }
//   return 0;
// }


//Soolve it using Do-while Loop

#include <stdio.h>
int main()
{
  int n, i = 1;
  printf("Enter Your Number");
  scanf("%d", &n);

 do
  {
    int j = 1;
   do
    {
      printf("*");
      j++;
    } while (j <= i);
        printf("\n");
    i++;
  } while (i <= n);
   return 0;
}