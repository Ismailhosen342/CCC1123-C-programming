#include <stdio.h>

/*
    Global variable
    Stores total number of students
*/
int studentCount = 5;

/*
    Function: isValidName
    Purpose : Check whether the name contains
              - only letters and spaces
              - at least one alphabet letter
*/
int isValidName(char name[])
{
    int i;
    int hasLetter = 0;   // To ensure name is not empty or spaces only

    for (i = 0; name[i] != '\0'; i++)
    {
        // Ignore newline character from fgets
        if (name[i] == '\n')
            continue;

        // Check if character is an alphabet letter
        if ((name[i] >= 'A' && name[i] <= 'Z') ||
            (name[i] >= 'a' && name[i] <= 'z'))
        {
            hasLetter = 1;
        }
        // Allow space between names
        else if (name[i] == ' ')
        {
            continue;
        }
        // Any other character is invalid
        else
        {
            return 0;
        }
    }

    // Name is valid only if it contains at least one letter
    return hasLetter;
}

/*
    Function: getValidName
    Purpose : Repeatedly ask user to enter name
              until a valid name is provided
*/
void getValidName(char name[])
{
    while (1)
    {
        printf("Enter student name: ");
        fgets(name, 50, stdin);

        // Validate name
        if (isValidName(name))
        {
            // Remove newline character
            for (int i = 0; name[i] != '\0'; i++)
            {
                if (name[i] == '\n')
                {
                    name[i] = '\0';
                    break;
                }
            }
            return; // Exit function if name is valid
        }
        else
        {
            printf("Invalid name! Use letters and spaces only.\n");
        }
    }
}

/*
    Function: getValidMark
    Purpose : Accept only numeric marks
              Range must be between 0 and 100
*/
float getValidMark(char subject[])
{
    float mark;
    char input[50];
    char extra;

    while (1)
    {
        printf("Enter %s mark: ", subject);
        fgets(input, sizeof(input), stdin);

        // Check if input is a valid number only
        if (sscanf(input, "%f %c", &mark, &extra) != 1)
        {
            printf("Invalid input! Please enter numbers only.\n");
            continue;
        }

        // Check mark range
        if (mark < 0 || mark > 100)
        {
            printf("Mark must be between 0 and 100.\n");
            continue;
        }

        return mark; // Return valid mark
    }
}

/*
    Function: calculateAverage
    Purpose : Calculate average of three subjects
*/
float calculateAverage(float math, float ps, float ca)
{
    return (math + ps + ca) / 3;
}

/*
    Function: displayResult
    Purpose : Display student name, average and grade
*/
void displayResult(char name[], float avg, char grade)
{
    printf("\nStudent Name : %s", name);
    printf("\nAverage Mark : %.2f", avg);
    printf("\nGrade        : %c\n", grade);
}

/*
    Main function
    Controls the overall program execution
*/
int main()
{
    char name[50];   // Store student name
    float math, problemSolving, computerArchitecture;
    float average;   // Store average mark
    char grade;      // Store grade

    // Loop to process all students
    for (int i = 1; i <= studentCount; i++)
    {
        printf("\n--- Student %d ---\n", i);

        // Get validated student name
        getValidName(name);

        // Get validated subject marks
        math = getValidMark("Mathematics");
        problemSolving = getValidMark("Problem Solving");
        computerArchitecture = getValidMark("Computer Architecture");

        // Calculate average marks
        average = calculateAverage(math, problemSolving, computerArchitecture);

        // Determine grade using if-else
        if (average >= 80)
            grade = 'A';
        else if (average >= 65)
            grade = 'B';
        else if (average >= 50)
            grade = 'C';
        else
            grade = 'F';

        // Display final result
        displayResult(name, average, grade);
    }

    return 0;   // End of program
}
