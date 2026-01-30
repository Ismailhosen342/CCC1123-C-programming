// Exercise 2: Student Marks Analysis Using Functions
// Write a C program to analyze student marks using a one-dimensional array and
// functions.
// Requirements:
// a) Declare a one-dimensional integer array of size 10 in the main() function.
// b) Write a function inputMarks() to read marks for 10 students.
// c) Write a function displayMarks() to display all the marks.
// d) Write a function findHighestLowest() to determine and display:
//  The highest mark
//  The lowest mark
// e) Write a function calculateAverage() to calculate and return the average mark.
// f) Display the average mark in main() (formatted to 2 decimal places).

#include <stdio.h>
int inputmarks(int mark[10])
{
  for (int i = 0; i < 10; i++)
  {
    printf("Enter mark %d :", i + 1);
    scanf("%d", &mark[i]);
  }
}
int displaymark(int mark[10])
{
  printf("You entered 10 student mark:");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", mark[i]);
  }
}

int findhlow(int mark[10], int low, int high)
{
  low = mark[0];
  high = mark[0];

  for (int i = 1; i < 10; i++)
  {
    if (mark[i] > high)
    {
      high = mark[i];
    }
    else if (mark[i] < low)
    {
      low = mark[i];
    }
  }
  printf("\nLowest mark:%d\n", low);
  printf("Highest mark:%d\n", high);
}

int avr(float avra, int mark[10])
{
  int sum = 0;
  for (int i = 0; i < 10; i++)
  {
    sum = sum + mark[i];
  }
  avra = sum / 10;
  printf("Average of 10 marks as below average:%.2f", avra);
}

int main()
{
  int mark[10], low, high;
  float avra;
  printf("Enter 10 student mark:\n");

  inputmarks(mark);
  displaymark(mark);
  findhlow(mark, low, high);
  avr(avra, mark);

  return 0;
}