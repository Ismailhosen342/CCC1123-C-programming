// Task-1
// Write a C program that demonstrates the use of basic string handling functions. 
// The program should:   
// Declare three string : str1[50], str2[50], and str3[50]. 
// Read two strings from the user and store it in str1 and str2. 
// Display the length of the first string using strlen(). 
// Copy the first string into another string using strcpy(). 
// Compare the two strings using strcmp() and display the comparison result. 
// If both string are equal, display "Both strings are equal” otherwise 
// display "Both strings are NOT equal"  
// Concatenate the second string to the first string using strcat(). 
// Display clear output for each operation.

#include<stdio.h>
#include<string.h>
int main(){
// Declare three string : str1[50], str2[50], and str3[50].

char str1[50],str2[50],str3[50];

// Read two strings from the user and store it in str1 and str2.
printf("Enter first string(Str1):");
// fgets(str1,50,stdin);
scanf("%s",str1);
printf("Enter second sting(str2):");
// fgets(str2,50,stdin);
scanf("%s",str2);

// Display the length of the first string using strlen().
printf("Length of first strings:%d\n",strlen(str1));

// Copy the first string into another string using strcpy().
strcpy(str3,str1);
printf("Copy string is(str3):%s\n",str3);

// Compare the two strings using strcmp() and display the comparison result.
// If both string are equal, display "Both strings are equal” otherwise
// display "Both strings are NOT equal"
int c;
c=strcmp(str1,str3);
if(c==0){
  printf("Both are equal\n");
}
else{
  printf("Both strings are NOT equal\n");
}
// Concatenate the second string to the first string using strcat().
strcat(str1,str2);
printf("After concatenation:%s\n",str1);

// Display clear output for each operation.
}

//strlen()
//strcpy()
//strcmp()
//strcat()
//Have to use #include<string.h>