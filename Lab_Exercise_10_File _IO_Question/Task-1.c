#include <stdio.h>

void writeStudentData()
{
  char name[20];
  int id;
  FILE *ftr;
  ftr = fopen("Student.txt", "w");
  if (ftr == NULL)
  {
    printf("Erorr");
  }
  while (1)
  {
    printf("Enter student ID(-1 to stop):");
    scanf("%d", &id);

    if (id == -1)
    {
      break;
    }

    getchar();

    fprintf(ftr, "%d ", id);
    printf("Enter student name:");
    fgets(name, 20, stdin);
    // fprintf(ftr,"%s ",name);
    fputs(name, ftr);
  }
  fclose(ftr);
}

void displayStudentData()
{
  printf("Reading data from file:\n");

  FILE *ftr;
  ftr = fopen("Student.txt", "r");
  if (ftr == NULL)
  {
    printf("Erorr");
  }
  int id;
  char name[20];
  while (fscanf(ftr, "%d ", &id) != EOF)
  {

    printf("Student ID:%d\n", id);
    fgets(name, 20, ftr);
    printf("Student Name:%s\n", name);
  }

  fclose(ftr);
}

int main()
{

  writeStudentData();
  displayStudentData();

  return 0;
}

//The END!!!