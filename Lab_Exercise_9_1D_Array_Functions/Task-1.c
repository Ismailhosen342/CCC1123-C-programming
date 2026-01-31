// Exercise 1: Array Manipulation – Even and Odd Numbers
// Write a C program that performs operations on a one-dimensional array of integers.
// Requirements:
// a) Create a function arrayOddEven()
// b) Declare a 1D integer array of size 12.
// c) Allow the user to input 12 integers into the array.
// d) Count and display the number of even and odd numbers in the array.
// e) Store all even numbers into a separate array called even[].
// f) Store all odd numbers into another array called odd[].
// g) Display both the even[] and odd[] arrays.

#include <stdio.h>
int arr[12], even[12], odd[12], ecount = 0, ocount = 0;
void array()
{
  printf("Enter any 12 Numbers:");

  for (int i = 1; i <= 12; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("You entered number:");
  for (int j = 0; j < 12; j++)
  {
    printf("%d ", arr[j]);
  }
  return;
}

void arrayoddeven()
{
  for (int i = 0; i < 12; i++)
  {
    if (arr[i] % 2 == 0)
    {
      even[ecount] = arr[i];
      ecount++;
    }
    else
    {
      odd[ocount] = arr[i];
      ocount++;
    }
  }
  printf("\nThe odds Number:%d\n", ocount);
  printf("The even Number:%d\n", ecount);

  printf("The odd number is:");
  for (int i = 0; i < ocount; i++)
  {
    printf("%d ", odd[i]);
  }
  printf("\nThe even number is:");
  for (int i = 0; i < ecount; i++)
  {
    printf("%d ", even[i]);
  }
}

int main()
{

  array();
  arrayoddeven();

  return 0;
}
//no copy past