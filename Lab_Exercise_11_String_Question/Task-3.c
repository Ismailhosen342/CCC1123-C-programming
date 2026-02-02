// Task-3
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char a[100];
  int i, vowel = 0, consonant = 0, digit = 0, space = 0;

  printf("Enter any sentence: ");
  scanf(" %[^\n]", a);  

  for (i = 0; a[i] != '\0'; i++)
  {

    // Vowels
    if (strchr("aeiouAEIOU", a[i]) != NULL)
    {
      vowel++;
    }

    // Digits
    else if (isdigit(a[i]))
    {
      digit++;
    }

    // Spaces
    else if (isspace(a[i]))
    {
      space++;
    }

    // Consonants
    else if (isalpha(a[i]))
    {
      consonant++;
    }
  }

  printf("\nString Analysis Result\n");
  printf("----------------------\n");
  printf("Vowels : %d\n", vowel);
  printf("Consonants : %d\n", consonant);
  printf("Digits : %d\n", digit);
  printf("Spaces : %d\n", space);

  // Convert string to uppercase
 for(i=0;a[i]!='\0';i++){

  a[i]=toupper(a[i]);
 }
   

  printf("String in Uppercase:\n%s\n", a);

  return 0;
}
