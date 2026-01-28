// Task 2 : Using Function and Global variable Write a program that defines three functions without parameters : 1. inputNumbers() → asks the user to enter three integers and stores them in global variables.2. processNumbers() → performs the following operations using the stored numbers : o Add the first two numbers.o Multiply the sum by the third number.o Subtract the third number from the product.3. displayResults() → prints the results of addition, multiplication, and subtraction.

#include<stdio.h>

int a,b,c;
int  sum,product,subtract;

void inputnumber(){

printf("Enter 3 number:");
scanf("%d %d %d", &a, &b ,&c);
return;
}

void process(){
  sum=a+b;
  product=sum*c;
  subtract=product-c;
  return;
}

void display(){
  printf("Sum of first two numbers:%d\n",sum);
  printf("Product with third number:%d\n", product);
  printf("subtract third number :%d\n", subtract);
  return;
}


int main(){
  inputnumber();
  process();
  display();

return 0;
}