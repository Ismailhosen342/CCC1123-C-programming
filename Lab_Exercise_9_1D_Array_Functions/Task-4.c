// Exercise 4: Search and Reverse Array Using Functions
// Develop a C program using a one-dimensional array and functions to perform searching
// and reversing operations.
// Requirements:
// a) Declare an integer array of size 5 in main().
// b) Write a function inputArray() to read the array elements.
// c) Write a function searchElement() that searches for a given number and returns its
// position (or -1 if not found).
// d) Write a function reverseArray() to reverse the elements of the array.
// e) Write a function displayArray() to display array elements.
// f) Display the array before and after reversing

#include <stdio.h>
int readarray(int elemment[5])
{
  for (int i = 0; i < 5; i++)
  {
    printf("Enter element %d:", i + 1);
    scanf("%d", &elemment[i]);
  }
  printf("Before reserve:");
  for (int i = 0; i <5; i++)
  {
    printf("%d ", elemment[i]);
  }
}

int search(int element[5]){
  int e;
  printf("\nEnter number to search:");
  scanf("%d",&e);
  for(int i=0;i<5;i++){
    if(e==element[i]){
      printf("The index number:%d",i);
    }
    
  }
}
int reserve(int element[]){
  int reserve[5];

  for (int i = 0; i < 5; i++)
  {
    reserve[i] = element[4 - i];
  }

  printf("\nReverse element: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", reserve[i]);
  }
}
  
int main()
{
  int element[5];
  readarray(element);
  search(element);
  reserve(element);
  
  return 0;
}