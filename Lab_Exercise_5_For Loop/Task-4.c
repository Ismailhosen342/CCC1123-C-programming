// 4. Write a program that keeps reading integers number using a for statement and
// calculate the average of the numbers.

#include<stdio.h>
int main(){
  int n,num;
  printf("How many number:");
  scanf("%d",&n);
  float sum=0, avr;

  for(int i=1;i<=n;i++){
    printf("Enter number %d:",i);
    scanf("%d",&num);
    sum=sum+num;

  }
  avr=(float)sum/n;
  printf("The sum is %.2f and average is %.2f.",sum ,avr);


  return 0;
}