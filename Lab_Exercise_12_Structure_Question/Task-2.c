//Task-2
#include <stdio.h>

struct Employee
{
  int empID;
  char name[30];
  float salary;
} emp[50]; // global array

int count = 0; // number of employees

// Function to input employee details
void inputEmployee()
{
  printf("\nEnter details for employee %d\n", count + 1);

  printf("Employee ID: ");
  scanf("%d", &emp[count].empID);

  printf("Name: ");
  scanf(" %[^\n]", emp[count].name); // allows spaces in name

  printf("Salary: ");
  scanf("%f", &emp[count].salary);

  count++; // increase employee count
}

// Function to calculate average salary
float calculateAverageSalary()
{
  float sum = 0.0;
  for (int i = 0; i < count; i++)
  {
    sum += emp[i].salary;
  }
  return sum / count;
}

// Function to display all employees
void displayEmployee()
{
  printf("\nEmployee Records\n");
  printf("ID\tName\t\tSalary(RM)\n");
  printf("===============================\n");
  for (int i = 0; i < count; i++)
  {
    printf("%d\t%s\t\t%.2f\n", emp[i].empID, emp[i].name, emp[i].salary);
  }
}

int main()
{
  char choice;
  float avgSalary;

  do
  {
    inputEmployee();

    printf("Anymore data [Y/N] : ");
    scanf(" %c", &choice);

  } while ((choice == 'Y' || choice == 'y') && count < 50);

  avgSalary = calculateAverageSalary();
  printf("\nAverage Salary: RM %.2f\n", avgSalary);

  displayEmployee();

  return 0;
}
