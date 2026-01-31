// Exercise 3: Even and Odd Array Processing Using Functions
// Write a C program that processes a one-dimensional array using multiple functions.
// Requirements:
// a) Declare an integer array of size 12 in main().
// b) Write a function readArray() to input the array elements.
// c) Write a function countEvenOdd() to count the number of even and odd values.
// d) Write a function separateEvenOdd() to store:
//  Even numbers into array even[]
//  Odd numbers into array odd[]
// e) Write a function displayArray() to display the contents of an array.
// f) Display the total number of even and odd elements.

#include<stdio.h>
int readarray(int elemment[12]){
for(int i=0;i<12;i++){
  printf("Enter element %d:",i+1);
  scanf("%d",&elemment[i]);
}
printf("You entered:");
for(int i=0;i<12;i++){
  printf("%d ",elemment[i]);
}
}

int count(int element[12]){
int ecount=0;
int ocount=0;
int even[12],odd[12];

for(int i=0;i<12;i++){
  if(element[i]%2==0){
  
   even[ecount]=element[i];
   ecount++;
  }
  else{
 
    odd[ocount]=element[i];
    ocount++;
  }
}

printf("\nEven number(%d):",ecount);
for(int i=0;i<ecount;i++){
  printf("%d ",even[i]);
}

printf("\nOdd number(%d):", ocount);
for (int i = 0; i < ocount; i++)
{
  printf("%d ", odd[i]);
}
}

int main(){
int element[12];
readarray(element);
count(element);
  return 0;
}