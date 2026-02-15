// Write a program that : 
// 1. Declares an integer array int arr[5] = {10, 20, 30, 40, 50};
// 2. Uses a pointer to display all elements of the array using pointer arithmetic 
// 3. Changes the 3rd element of the array to 99 using the pointer 
// 4. Displays the updated array.


#include<stdio.h>
int main(){
int arr[5]={10,20,30,40,50};
int *ptr=arr;
printf("Before:\n");
for(int i=0;i<5;i++){
  printf("%d\n",*(ptr+i));
}

*(ptr+2)=99;
printf("After:\n");

for (int i = 0; i < 5; i++)
{
  printf("%d\n", *(ptr + i));
}
  return 0;
}