// 3. Using a for loop, calculate the factorial of a given integer N.

// #include<stdio.h>
// int main(){
// int n,fact=1;
// printf("Enter your Number:");
// scanf("%d",&n);

// for(int i=1; i<=n;i++){
//   fact=fact*i;
// }
// printf("The factorials is:%d", fact);

// return 0;
// }

//What is factorial

//5=1*2*3*4*5

#include<stdio.h>
int main(){
int num,fact=1;
printf("Enter your number:");
scanf("%d",&num);


for(int i=1;i<=num;i++){
  fact=fact*i;
}
printf("The factorial is:%d",fact);
  return 0;
}