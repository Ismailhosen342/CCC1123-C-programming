// Task 4: Restaurant Ordering System
// A restaurant offers a menu. Ask user for choice and display the price using switch-case.
// A restaurant offers the following items:
// 1. Nasi Goreng RM6.50
// 2. Mee Goreng RM6.0
// 0 3. Teh Ais RM2.0
// 0 4. Milo Ais RM2.50
// Write a C program that :
// 1. Displays the menu.
// 2. Prompts the user to enter their choice using scanf.
// 3. Uses a switch - case to print the price of the selected item.
// 4. If the choice is not 1–4, print "Invalid menu selection".Sample expected output:
// Enter menu number : 1
// You selected menu : Nasi Goreng
//   Price : RM6.50

#include <stdio.h>
int main()
{

  printf("A restaurant offers the following items:\n 1. Nasi Goreng RM6.50 \n 2. Mee Goreng RM6.0\n 3. Teh Ais RM2.0\n 4. Milo Ais RM2.50 \n");
  int choice;
  printf("Enter your choice:");
  scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
          printf("Your selected menu :Nasi GORENG \n price:RM 6.50");
          break;
        }
        case 2:
        {
          printf("Your selected menu :Mee GORENG \n price:RM 6.00");
          break;
        }
        case 3:
        {
          printf("Your selected menu :Teh Ais \n price:RM 2.00");
          break;
        }
        case 4:
        {
          printf("Your selected menu :Milo Ice \n price:RM 2.50");
          break;
        }
        default:
        {
          printf("Iinvaild Input");
        }
        }

  return 0;
}


//Done Thank you myself 
//Love you
//You can do it
//Make ur parents happy