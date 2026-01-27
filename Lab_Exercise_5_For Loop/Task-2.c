// 2. Ask the user for N and print the following pattern using both for statement


#include<stdio.h>
int main(){
int n;
printf("Enter Your Number");
scanf("%d",&n);

    for(int i=1;i<=n;i++){
          for(int j=1;j<=i;j++){
            printf("*");
          }
      printf("\n");
    }
  return 0;
}