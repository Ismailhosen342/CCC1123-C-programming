#include <stdio.h>

int main()
{
  int test1, test2, test3;
  float avg;

  int *ptest1 = &test1;
  int *ptest2 = &test2;
  int *ptest3 = &test3;
  float *pavg = &avg;

  printf("Enter Test 1 marks: ");
  scanf("%d", ptest1);

  printf("Enter Test 2 marks: ");
  scanf("%d", ptest2);

  printf("Enter Test 3 marks: ");
  scanf("%d", ptest3);

  *pavg = (*ptest1 + *ptest2 + *ptest3) / 3.0;

  printf("\nMarks you entered:\n");
  printf("Test 1 = %d\n", *ptest1);
  printf("Test 2 = %d\n", *ptest2);
  printf("Test 3 = %d\n", *ptest3);

  printf("Average = %.2f\n", *pavg);

  return 0;
}