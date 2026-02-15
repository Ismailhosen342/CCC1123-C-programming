

// #include <stdio.h>
// int main()
// {
//   int num = 10;
//   int *ptr;
//   ptr = &num;
//   printf("Value of num = %d\n", num);// number
//   printf("Address of num = %p\n", &num);//address
//   printf("Value stored in ptr = %p\n", ptr);//address
//   printf("Value pointed by ptr = %d\n", *ptr);// Number
//   return 0;
// }

#include <stdio.h>
int main()
{
  int num = 10;
  int *ptr;
  ptr=&num;
  
printf("%d\n",num);//Number
printf("%p\n",&num);//Address
printf("%p\n",ptr);//Address
printf("%d",*ptr);//Number
  return 0;
}
