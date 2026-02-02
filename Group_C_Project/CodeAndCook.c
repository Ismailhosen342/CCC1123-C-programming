#include <stdio.h>
#include <string.h>
#include <ctype.h>


// Global variable for service charge rate
float serviceChargeRate = 0.05;

// Function prototypes
int loadMenu(char menu[][20], float prices[], int maxItems);
void takeOrder(char menu[][20], int menuSize,
               char orderedItems[][20], int orderedQuantities[],
               int *totalOrders, float prices[], float *totalPrice);
void showOrder(char orderedItems[][20], int orderedQuantities[],
               int totalOrders, char menu[][20], float prices[], int menuSize);
float applyServiceCharge(float amount);
void printTotalItems(int total);
void saveReceipt(char orderedItems[][20], int orderedQuantities[],
                 int totalOrders, char menu[][20], float prices[],
                 int menuSize, float finalTotal);

int main() {
    char menu[50][20];
    float prices[50];

    // Load menu
    int menuSize = loadMenu(menu, prices, 50);
    if (menuSize == 0) {
        printf("No menu loaded. Exiting program.\n");
        return 1;
    }

    int running = 1;

    while (running) {
        // Display menu
        printf("\n--- MENU ---\n");
        for (int i = 0; i < menuSize; i++) {
            printf("%s @ RM%.2f\n", menu[i], prices[i]);
        }

        // Order variables
        char orderedItems[20][20];
        int orderedQuantities[20];
        int totalOrders = 0;
        float totalPrice = 0.0;
        int isTakeaway, isStudent;

        // Take order
        takeOrder(menu, menuSize, orderedItems, orderedQuantities,
                  &totalOrders, prices, &totalPrice);

        if (totalOrders == 0) {
            printf("No items ordered.\n");
        } else {
            // Takeaway or dine-in
            printf("\nIs this order takeaway? (1 = Yes, 0 = Dine-in): ");
            scanf("%d", &isTakeaway);

            if (isTakeaway) {
                float takeawayCharge = 0.50 * totalOrders;
                totalPrice += takeawayCharge;
                printf("Takeaway charge RM%.2f added.\n", takeawayCharge);
            } else {
                totalPrice = applyServiceCharge(totalPrice);
                printf("5%% service charge applied.\n");
            }

            // Student discount
            printf("\nAre you a student? (1 = Yes, 0 = No): ");
            scanf("%d", &isStudent);

            if (isStudent && totalPrice >= 1.00) {
                totalPrice -= 1.00;
                printf("Student discount RM1.00 applied.\n");
            }

            // Show summary
            showOrder(orderedItems, orderedQuantities,
                      totalOrders, menu, prices, menuSize);

            // Save receipt
            saveReceipt(orderedItems, orderedQuantities,
                        totalOrders, menu, prices, menuSize, totalPrice);

            printf("\nFinal Total: RM%.2f\n", totalPrice);
            printTotalItems(totalOrders);
        }

        // Order again?
        int choice;
        printf("\nWhat would you like to do next?\n");
        printf("1. Order Again\n2. Exit\nChoose option: ");
        scanf("%d", &choice);

        if (choice == 2) {
            running = 0;
            printf("\nThank you for visiting!\n");
        }
    }

    return 0;
}

// Load menu from file
int loadMenu(char menu[][20], float prices[], int maxItems) {
    FILE *file = fopen("menu.txt", "r");
    if (!file) {
        printf("Error: Could not open menu file.\n");
        return 0;
    }

    int count = 0;
    char name[20];
    float price;

    while (fscanf(file, "%s %f", name, &price) == 2 && count < maxItems) {
        strcpy(menu[count], name);
        prices[count] = price;
        count++;
    }

    fclose(file);
    return count;
}

// Take order
void takeOrder(char menu[][20], int menuSize,
               char orderedItems[][20], int orderedQuantities[],
               int *totalOrders, float prices[], float *totalPrice) {

    char item[20];
    int quantity;
    int choice;

    printf("\nStart ordering.\n");

    while (1) {
        printf("\nEnter item name: ");
        scanf("%s", item);

        // Convert input to uppercase
        for (int i = 0; item[i]; i++) {
            item[i] = toupper(item[i]);
        }

        int found = 0;

        // Check if item exists in menu
        for (int i = 0; i < menuSize; i++) {
            if (strcmp(item, menu[i]) == 0) {
                found = 1;

                // Only ask quantity if item is found
                printf("Enter quantity: ");
                scanf("%d", &quantity);

                strcpy(orderedItems[*totalOrders], item);
                orderedQuantities[*totalOrders] = quantity;
                *totalPrice += prices[i] * quantity;
                (*totalOrders)++;
                break;
            }
        }

        // If item not found, show message
        if (!found) {
            printf("Item not found in menu. Try again.\n");
            continue;
        }

        // Ask if user wants to order more
        printf("\nWould you like to order more?\n");
        printf("1. Yes\n2. No\nChoose option: ");
        scanf("%d", &choice);

        if (choice == 2) {
            break;
        }
    }
}

// Show order summary
void showOrder(char orderedItems[][20], int orderedQuantities[],
               int totalOrders, char menu[][20], float prices[], int menuSize) {

    printf("\n--- Your Order Summary ---\n");
    for (int i = 0; i < totalOrders; i++) {
        for (int j = 0; j < menuSize; j++) {
            if (strcmp(orderedItems[i], menu[j]) == 0) {
                printf("%d x %s @ RM%.2f = RM%.2f\n",
                       orderedQuantities[i],
                       orderedItems[i],
                       prices[j],
                       prices[j] * orderedQuantities[i]);
                break;
            }
        }
    }
}

// Apply service charge
float applyServiceCharge(float amount) {
    return amount + (amount * serviceChargeRate);
}

// Print total items
void printTotalItems(int total) {
    printf("You ordered %d different items.\n", total);
}

// Save receipt
void saveReceipt(char orderedItems[][20], int orderedQuantities[],
                 int totalOrders, char menu[][20], float prices[],
                 int menuSize, float finalTotal) {

    FILE *file = fopen("receipt.txt", "a");
    if (!file) {
        printf("Error: Could not create receipt file.\n");
        return;
    }

    fprintf(file, "\n--- RECEIPT ---\n");

    for (int i = 0; i < totalOrders; i++) {
        for (int j = 0; j < menuSize; j++) {
            if (strcmp(orderedItems[i], menu[j]) == 0) {
                fprintf(file, "%d x %s @ RM%.2f = RM%.2f\n",
                        orderedQuantities[i],
                        orderedItems[i],
                        prices[j],
                        prices[j] * orderedQuantities[i]);
                break;
            }
        }
    }

    fprintf(file, "Final Total: RM%.2f\n", finalTotal);
    fprintf(file, "----------------------------\n");

    fclose(file);

    printf("\nReceipt saved to receipt.txt\n");
}
