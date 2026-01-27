// 5. Use a for loop to calculate the sum of all odd numbers between 1 and 100.

#include<stdio.h>
int main(){
  int sum=0;
for(int i=1;i<=100;i++){
  if(i%2!=0){
    sum=sum+i;
  }
}
printf("The sum is:%d",sum);

  return 0;
}