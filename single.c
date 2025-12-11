#include <stdio.h>

int main() {

    int pin = 1234;          // Default ATM PIN
    int userPin;             // Variable to store user entered PIN
    int balance = 5000;      // Initial balance
    int choice;              // Menu choice input

    int trans[50];           // Array to store transaction amounts
    int count = 0;           // Keeps track of number of transactions

    // Ask user for PIN
    printf("Enter ATM PIN: ");
    scanf("%d", &userPin);

    // Check PIN validity
    if (userPin != pin) {
        printf("Wrong PIN.\n");
        return 0;            // End program if PIN is wrong
    }

    printf("Login Successful\n");

    // Loop for showing menu repeatedly
    while (1) {

        printf("\nATM MENU\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Transaction History\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Option 1: Check balance
        if (choice == 1) {
            printf("Balance = %d\n", balance);
        }

        // Option 2: Deposit
        else if (choice == 2) {
            int amount;
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);

            if (amount > 0) {
                balance += amount;         // Update balance
                trans[count] = amount;     // Store deposit in array
                count++;                   // Increase transaction count
                printf("Deposited %d\n", amount);
            } else {
                printf("Invalid amount\n");
            }
        }

        // Option 3: Withdraw
        else if (choice == 3) {
            int amount;
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);

            if (amount > 0 && amount <= balance) {
                balance -= amount;         // Update balance
                trans[count] = -amount;    // Store withdrawal as negative
                count++;
                printf("Withdrawn %d\n", amount);
            } else {
                printf("Invalid or insufficient balance\n");
            }
        }

        // Option 4: Show transaction history
        else if (choice == 4) {
            printf("Transaction History:\n");

            if (count == 0) {
                printf("No transactions\n");
            } else {
                for (int i = 0; i < count; i++) {
                    if (trans[i] > 0)
                        printf("Deposit : %d\n", trans[i]);
                    else
                        printf("Withdraw: %d\n", -trans[i]);
                }
            }
        }

        // Option 5: Exit program
        else if (choice == 5) {
            printf("Exiting...\n");
            break;           // Exit the loop
        }

        // Invalid menu input
        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
