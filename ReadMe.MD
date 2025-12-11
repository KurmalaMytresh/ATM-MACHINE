PROJECT TITLE : ATM MEMU SIMULATION 
---

1. Team Members

1.MERLA DHARMA SUDHEER-AP25110010274

2.KURMALA MYTRESH-AP25110010080

3.KUDURU DILEEP-AP25110010966

4.TOKALA BRAHMA TEJA-AP25110010840


2. Objective

The main objective of this project is to develop a simple ATM simulation program in the C language that can perform basic banking operations such as checking balance, depositing money, withdrawing money, and viewing transaction history based on user input. The program uses arrays to store transaction details and allows users to interact with the ATM menu effectively.

This project helps students understand user input handling, arrays, looping, conditional statements, and basic programming logic required to implement real-world applications.


---

3. Problem Statement

Design and implement a simple ATM system using C that:

Accepts a PIN from the user for authentication.

Allows the user to check their current account balance.

Enables the user to deposit and withdraw money.

Stores each transaction (deposit/withdrawal) in an array.

Displays the entire transaction history using array values.

Handles invalid inputs such as wrong PIN, invalid amounts, or insufficient balance.

Provides a menu-based interface that repeats until the user chooses to exit.



---

Algorithm / Logic

1. Start the program.


2. Declare variables for PIN, user input, balance, and an array to store transactions.


3. Ask the user to enter the ATM PIN.


4. If the entered PIN is wrong, display an error and end the program.


5. If the PIN is correct, display the ATM menu.


6. Input the user’s choice of operation.


7. Use a loop to repeatedly show the menu until the user exits.


8. For each choice:

If Balance Check: Display the current balance.

If Deposit:
► Ask the user for the amount.
► Add the amount to the balance.
► Store the amount in the transaction array.

If Withdraw:
► Ask the user for the amount.
► Check if balance is sufficient.
► Subtract the amount from the balance.
► Store the negative value in the transaction array.

If Transaction History:
► Display all values stored in the transaction array.

If Exit:
► Break the loop and end the program.



9. If an invalid choice is entered, show an error message.


10. Repeat steps 6–9 until the user selects Exit.


11. End the program.




---

6. Program Explanation (Concepts Used)

1. Variables

Variables such as balance, choice, amount, and userPin are used to store user inputs, account balance, and menu options.
The variable count is used to keep track of how many transactions have been stored.


---

2. Arrays

An integer array trans[50] is used to store all transactions performed by the user.
Each deposit is stored as a positive value, and each withdrawal as a negative value.
Arrays allow multiple values to be stored and retrieved efficiently.


---

3. Input/Output Functions

scanf() is used to take input from the user such as PIN, deposit amount, withdrawal amount, and menu choices.
printf() is used to display messages, balance information, transaction history, and error messages.


---

4. Conditional Statements

if and else if statements are used to verify the PIN, check sufficient balance for withdrawal, validate amounts, and handle incorrect menu choices.
These conditions help control the program flow based on the user’s input.


---

5. Looping (while loop)

A while(1) loop is used to continuously display the ATM menu until the user chooses to exit.
This allows the user to perform multiple operations in a single run of the program.


---

6. Menu-Driven Logic

The program displays a list of ATM options and allows the user to select one.
Based on the chosen option, the program performs the appropriate action (check balance, deposit, withdraw, view transactions, or exit).


---

7. Arithmetic Operations

Addition is used to update the balance during deposits, and subtraction is used during withdrawals.
Positive and negative values stored in the array help in representing transaction history.


---

8. Error Handling

The program checks for invalid PIN entry, invalid menu options, negative deposit/withdraw values, and insufficient balance before withdrawing.
This ensures safe and predictable program behavior.


---

9. Storage and Retrieval of Data Using Arrays

The array is used to maintain a simple transaction history.
Using a loop, the stored values are displayed to the user, showing deposits and withdrawals separately.


---

⭐ Conclusion

The ATM Simulation Program developed in C successfully demonstrates the practical use of fundamental programming concepts such as variables, arrays, loops, conditional statements, and user-defined menus. By incorporating arrays to store transaction history, the project showcases how data can be efficiently recorded, accessed, and managed within a program.

This project not only replicates real-world ATM operations like balance inquiry, deposit, withdrawal, and transaction viewing but also strengthens understanding of control structures and user input handling. Through this implementation, students gain valuable hands-on experience in designing interactive console applications and applying logical thinking to solve practical problems using the C programming language.

Overall, the project reinforces core programming concepts and provides a strong foundation for further learning.


Important Notes / Assumptions

1.The ATM system assumes that the user enters a valid 4-digit PIN.

2. The initial account balance is assumed to be a predefined value (ex: 0 or 5000).

3. The maximum number of transactions stored is limited by the array size (e.g., 50).

4. The user cannot deposit or withdraw negative amounts.

5. Withdrawal is allowed only if the current balance is sufficient.

6. The program does not connect to a real bank server; it is only a simulation.

7. The PIN is fixed and stored inside the program (not changeable by the user).

8. The program assumes the user will enter correct data types (integers).

9. No interest, taxes, or additional banking features are calculated.

 10.Transaction history stores deposits as positive values and withdrawals as negative values.

---

How to Compile and Run:

Compile:

gcc yourprogram.c -o

Run:

./output

---