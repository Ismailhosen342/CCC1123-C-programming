// Write a C program that reads an integer between 1 and 7 and prints the corresponding day
// of the week.Use a switch..case statement.Example Output:
// Enter day number(1 - 7) : 3 Wednesday

// #include <stdio.h>
// int main()
// {
//   int num;
//   printf("Enter day number(1 - 7) :");
//   scanf("%d", &num);

//   switch (num)
//   {

//   case 1:
//   {
//     printf("Sunday");
//     break;
//   }
//   case 2:
//   {
//     printf("Monday");
//     break;
//   }

//   case 3:
//   {
//     printf("Tuesday");
//     break;
//   }

//   case 4:
//   {
//     printf("Wednesday");
//     break;
//   }
//   case 5:
//   {
//     printf("Thursday");
//     break;
//   }
//   case 6:
//   {
//     printf("Friday");
//     break;
//   }
//   case 7:
//   {
//     printf("Saturrday");
//     break;
//   }
//   }

//   return 0;
// }

// Exercise 3.2 Write a C program that takes a character input(A, B, C, D, F)
// and displays the grade description using switch..case.

#include <stdio.h>
int main()
{

  // Grade Table :
  // A – Excellent
  // B – Good
  // C – Average
  // D – Poor
  // F – Fail

char grade;
printf("Enter grade:");
scanf("%c",&grade);

switch(grade){

  case 'A':
  printf("Excellent");
  break;
  case 'B':{
    printf("Good");
    break;
  }

  case 'C':
  {
    printf("Average");
    break;
  }
  case 'D':
  {
    printf("Poor");
    break;
  }
  case 'E':
  {
    printf("Almost Fail");
    break;
  }
  case 'F':
  {
    printf("Fail");
    break;
  }

  default:{
    printf("Wrong Input...........Try again!");
    break;
  }
}



  return 0;
}