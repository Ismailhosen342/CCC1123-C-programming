// TASK 1 : Variable and Constant Declaration(20 minutes)
// Objective : Understand how to declare variables and constants in C

#include <stdio.h>
int main()
{

  int a = 34;
  float b = 2.647;
  char c = 'A';
  double d = 38.93940;
  float const PI = 3.1416;

  printf("Int value is:%.0d\n", a);
  printf("Float value is:%.4f\n", b);
  printf("Char value is:%c\n", c);
  printf("Double value is:%.5lf\n", d);
  printf("Const value is:%.2f\n", a);

  return 0;
}