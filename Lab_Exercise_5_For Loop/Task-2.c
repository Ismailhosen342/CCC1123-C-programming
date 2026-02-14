// 2. Ask the user for N and print the following pattern using both for statement


// #include<stdio.h>
// int main(){
// int n;
// printf("Enter Your Number");
// scanf("%d",&n);
// // utter loop  print row and line
//     for(int i=1;i<=n;i++){
//           for(int j=1;j<=i;j++){//Innner loop priint collum
//             printf("*");
//           }
//       printf("\n");
//     }
//   return 0;
// }

//    *
//   **

#include<stdio.h>
int main(){
int n=5;
// printf("Enter Your Number");
// scanf("%d",&n);
 
for(int i=1;i<=5;i++){
  for(int j=1;j<=i;j++){
    printf("*");
  }
   printf("\n");
}

  return 0;
}
