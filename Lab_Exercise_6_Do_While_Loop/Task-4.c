// 4. Write a program that keeps reading integers number using a for statement and
// calculate the average of the numbers.

// #include <stdio.h>
// int main()
// {
//   int n, num,i=1;
//   printf("How many number:");
//   scanf("%d", &n);
//   float sum = 0, avr;

//   while( i <= n)
//   {
//     printf("Enter number %d:", i);
//     scanf("%d", &num);
//     sum = sum + num;
//     i++;
//   }
//   avr = (float)sum / n;
//   printf("The sum is %.2f and average is %.2f.", sum, avr);

//   return 0;
// }


//Solve using Do-while loop

#include <stdio.h>
int main()
{
  int n, num, i = 1;
  printf("How many number:");
  scanf("%d", &n);
  float sum = 0, avr;

  
  do{
    printf("Enter number %d:", i);
    scanf("%d", &num);
    sum = sum + num;
    i++;
  }
  while (i <= n);
    avr = (float)sum / n;
  printf("The sum is %.2f and average is %.2f.", sum, avr);

  return 0;
}