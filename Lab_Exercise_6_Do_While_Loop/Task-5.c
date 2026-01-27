// 5. Use a for loop to calculate the sum of all odd numbers between 1 and 100.
//using While and do-while loop

// #include <stdio.h>
// int main()
// {
//   int sum = 0,i=1;
//   while(i <= 100)
//   {
//     if (i % 2 != 0)
//     {
//       sum = sum + i;
//     }
//     i++;
//   }
//   printf("The sum is:%d", sum);

//   return 0;
// }


//Solve using do-while loop

#include <stdio.h>
int main()
{
  int sum = 0, i = 1;
do{
    if (i % 2 != 0)
    {
      sum = sum + i;
    }
    i++;
  } while (i <= 100);
      printf("The sum is:%d", sum);

  return 0;
}