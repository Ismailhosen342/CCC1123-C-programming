#include <stdio.h>

struct student
{
  int id;
  char name[30];
  float cgpa;
} stdinfo;

void readstudent()
{
  printf("\nEnter Student details");

  printf("\nStudent ID: ");
  scanf("%d", &stdinfo.id);

  printf("Student Name: ");
  scanf(" %[^\n]", stdinfo.name);

  printf("Student CGPA: ");
  scanf("%f", &stdinfo.cgpa);
}

void display(struct student s)
{
  printf("\n--- Student Record ---\n");
  printf("Student ID: %d\n", s.id);
  printf("Student Name: %s\n", s.name);
  printf("Student CGPA: %.2f\n", s.cgpa);
}

int main()
{
  struct student s;
  char choice;

  do
  {
    readstudent();
    s = stdinfo; // copy global → local
    display(s);

    printf("\nAny more data [Y/N] : ");
    scanf(" %c", &choice);

  } while (choice == 'Y' || choice == 'y');

  return 0;
}
