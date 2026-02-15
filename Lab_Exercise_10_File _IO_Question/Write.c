
// #include <stdio.h>
// #include<string.h>
// int main()
// {
  // printf to print someting
  // scanf take input string
  // fgets take string input
  // fput to show output
  // char name[20];

  // printf("Enter Your Full-Name:");
  // fgets(name,sizeof(name),stdin);
  // printf("Your name is:%s",name);

// FILE *fp;
// fp=fopen("test.txt","w");
// if(fp==NULL){
//   printf("File can not be opened");
//   return 0;
// }
// to print something in file we
//can use fprintf,fputc,fputs;
//this function to put something write on file  
// char ch='A';
// fputc(ch,fp);

// char name[20]="Ismail Hosen Done";
// // fputs(name,fp);

// for(int i=0;i<strlen(name);i++){
//   fputc(name[i],fp);
// }

// int a=10;
// char name[20]="Ismail Hosen";

// fprintf(fp,"%d ------ %s",a,name);

// //To Write  something in file
// // fputc(ch,fp);
// // fputs(name,fp);
// // fprintf(fp,"%d",age);






// fclose(fp);
// printf("Done");


//   return 0;
// }

#include <stdio.h>

int main()
{
  FILE *fp = fopen("data.txt", "r");
  if (fp == NULL)
  {
    printf("Error opening file");
    return 1;
  }

  char name[20];
  int age;
  char header[50];

  // 1️⃣ Skip header line
  fgets(header, sizeof(header), fp);

  // 2️⃣ Read actual data
  fscanf(fp, "%s %d", name, &age);

  printf("Name: %s\n", name);
  printf("Age : %d\n", age);

  fclose(fp);
  return 0;
}
