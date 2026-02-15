// #include<stdio.h>
// int main(){

// FILE *fp;
// fp=fopen("test2.txt","r");
// if(fp==NULL){
//   printf("Error");
// }

// //To read something from c
// //fscanf
// //fgetc
// //fgets
//  char ch;
// while(ch=fgetc(fp)){
// printf("%c",ch);
// }


// // char str[50];
// // while(fgets(str,50, fp)){

// //   printf("%s", str);
// // }
// fclose(fp);
// printf("\n Okay Done");
//   return 0;
// }



// #include <stdio.h>

// int main()
// {
//   FILE *fp = fopen("test2.txt", "r");
//   if (fp == NULL)
//     return 1;

//   int ch;
//   while ((ch = fgetc(fp)) != EOF)
//   {
//     printf("%c", ch);
//   }

//   fclose(fp);
//   return 0;
// }

// #include <stdio.h>

// int main()
// {
//   FILE *fp = fopen("test2.txt", "r");
//   if (fp == NULL)
//     return 1;

//   char str[50];
//   while (fgets(str, sizeof(str), fp) != NULL)
//   {
//     printf("%s", str);
//   }

//   fclose(fp);
//   return 0;
// }

#include <stdio.h>

int main()
{
  FILE *fp = fopen("test2.txt", "r");
  if (fp == NULL)
    return 1;

  char word[20];
  while (fscanf(fp, "%19s", word) != EOF)
  {
    printf("%s\n", word);
  }

  fclose(fp);
  return 0;
}
