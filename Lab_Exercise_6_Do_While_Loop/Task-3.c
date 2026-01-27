// 3. Using a for loop, calculate the factorial of a given integer N.
// Solve this using whiile and do-while loop

// #include <stdio.h>
// int main()
// {
//   int n, fact = 1,i=1;
//   printf("Enter your Number:");
//   scanf("%d", &n);

//   while(i <= n)
//   {
//     fact = fact * i;
//     i++;
//   }
//   printf("The factorials is:%d", fact);

//   return 0;
// }

//Solve using do-while loop

#include <stdio.h>
int main()
{
  int n, fact = 1, i = 1;
  printf("Enter your Number:");
  scanf("%d", &n);
do
  {
    fact = fact * i;
    i++;
  } while (i <= n);
      printf("The factorials is:%d", fact);

  return 0;
}