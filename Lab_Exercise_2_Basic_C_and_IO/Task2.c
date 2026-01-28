// TASK 2 : Understanding Data Types and Type Conversion(30 minutes)
#include <stdio.h>
int main()
{
  int a = 5, b = 2;
  float result, cresult;
  result = a / b;
  cresult = (float)a / b;
  printf("Integer division result:%f\n", result);
  printf("Floating-point division result:%f", cresult);
  return 0;
}
// done