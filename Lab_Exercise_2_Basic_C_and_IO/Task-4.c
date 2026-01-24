// TASK 4 : Display Floating Point Values in Exponential Form(extra time) Objective :
//  Use the% e and % E format specifiers to display floating
// point values in scientific(exponential) notation.

#include <stdio.h>
int main()
{
  float num1 = 1230000000, num2 = 0.000000234;
  printf("===== Display Floating-Point Values in Exponential Form =====\n");
  printf("Num-1 normal format:%f\n", num1);
  printf("Num-1 exponential format:%.2e\n", num1);
  printf("Num-1 exponential format:%.2E\n", num1);

  printf("Num-2 normal format:%f\n", num2);
  printf("Num-2 exponential format:%.2e\n", num2);
  printf("Num-2 exponential format:%.2E\n", num2);

  return 0;
}