// Task 3 : Character Grade Interpretation Write a C program that reads a single character from the user :
// Enter a grade(A, B, C, D) : Use a switch - case to print the meaning:
//  A → "Excellent"
//  B → "Good"
//  C → "Satisfactory"
//  D → "Pass" If the user enters any other character, display "Invalid grade".
// Sample Output : Enter a grade(A, B, C, D) : B(underline value enter by user)
// Good

#include <stdio.h>
int main()
{

    char choice;
    printf("Enter a grade(A, B, C, D) :");
    scanf("%c", &choice);

          switch (choice)
        {
        case 'A':
          printf("Excellent");
          break;
        case 'B':
          printf("Good");
          break;
        case 'C':
          printf("Satisfactory");
          break;
        case 'D':
          printf("Pass");
          break;

        default:
          printf("Invalid Input");
          break;
        }

  return 0;
}