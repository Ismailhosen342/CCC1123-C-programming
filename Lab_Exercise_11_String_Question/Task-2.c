#include <stdio.h>
#include <string.h>

int main()
{
  char user[20], pass[20];
  char userf[20], passf[20];
  int match = 0;

  printf("Enter your username: ");
  scanf("%s", user);

  printf("Enter your password: ");
  scanf("%s", pass);

  FILE *ftr = fopen("users.txt", "r");
  if (ftr == NULL)
  {
    printf("File not found!!\n");
    return 1;
  }

  while (fscanf(ftr, "%s %s", userf, passf) != EOF)
  {
    if (strcmp(user, userf) == 0 && strcmp(pass, passf) == 0)
    {
      match = 1;
      break;
    }
  }

  fclose(ftr);

  if (match)
    printf("Login successful!\n");
  else
    printf("Invalid username or password!\n");

  return 0;
}
