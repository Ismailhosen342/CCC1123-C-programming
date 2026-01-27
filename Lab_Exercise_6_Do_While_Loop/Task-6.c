// 6. A supermarket introduces a Customer Reward Point System to encourage regular
//     shopping.Each customer may purchase several items in a single visit,
//     and points are given based on the total amount spent.

// Using While Loop

// #include <stdio.h>
// int main()
// {
//   int num ,i=1;
//   float price, sum = 0;
//   printf("Enter number of items purchased:");
//   scanf("%d", &num);
//   while ( i <= num )
//   {
//     printf("Enter price of item %d:", i);
//     scanf("%f", &price);
//     sum = sum + price;
//     i++;
//   }
//   printf("Total amount spent:RM%.2f\n", sum);

//   if (sum >= 100)
//   {
//     printf("The reward point earn:50 point");
//   }
//   else if (sum >= 50 && sum <= 99)
//   {
//     printf("The reward point earn:20 point");
//   }
//   else if (sum < 50)
//   {
//     printf("The reward point earn:5 point");
//   }
//   return 0;
// }

// uSING dOO-wHILE LOOP

#include <stdio.h>
int main()
{
  int num, i = 1;
  float price, sum = 0;
  printf("Enter number of items purchased:");
  scanf("%d", &num);
  do
  {
    printf("Enter price of item %d:", i);
    scanf("%f", &price);
    sum = sum + price;
    i++;
  } while (i <= num);
  printf("Total amount spent:RM%.2f\n", sum);

  if (sum >= 100)
  {
    printf("The reward point earn:50 point");
  }
  else if (sum >= 50 && sum <= 99)
  {
    printf("The reward point earn:20 point");
  }
  else if (sum < 50)
  {
    printf("The reward point earn:5 point");
  }
  return 0;
}