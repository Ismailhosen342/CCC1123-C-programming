// 3. Using a for loop, calculate the factorial of a given integer N.

#include<stdio.h>
int main(){
int n,fact=1;
printf("Enter your Number:");
scanf("%d",&n);

for(int i=1; i<=n;i++){
  fact=fact*i;
}
printf("The factorials is:%d", fact);

return 0;
}