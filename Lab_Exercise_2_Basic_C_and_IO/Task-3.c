// TASK 3 : User Input, Arithmetic Operation and Output Display(40 minutes) Objective : Use input / output functions(scanf, fgets)
// to interact with users, perform arithmetic operations, and display results clearly

#include <stdio.h>
int main()
{

    char student_name[50];

    printf("===== Student Total Marks Calculation System =====\n");
    printf("Enter your full name:");
    fgets(student_name, sizeof(student_name), stdin);

    float quiz, assignment, project, midTerm, finalExam;
    float carryMark, totalMark;

    printf("Enter quiz mark (10%):");
    scanf("%f", &quiz);

    printf("Enter assigment mark (10%):");
    scanf("%f", &assignment);

    printf("Enter project mark (20%):");
    scanf("%f", &project);

    printf("Enter Mid-term mark (20%):");
    scanf("%f", &midTerm);

    printf("Enter Final Exam mark (40%):");
    scanf("%f", &finalExam);

    carryMark = quiz + assignment + project + midTerm;
    totalMark = carryMark + finalExam;

    printf("--- Student Total Marks Summary ---\n");
    printf("Student name:%s\n", student_name);
    printf("Carry mark(60%):%.2f\n", carryMark);
    printf("Final exam(40):%.2f\n", finalExam);
    printf("Total mark:%.2f\n", totalMark);
    printf("--- Thank you! ---\n");
    return 0;
}
// done