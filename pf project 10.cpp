#include <iostream>
#include <string>
using namespace std;

// Define a structure to hold user information for the SIM system
struct SIMUser {
    string name;
    int balance;
    int loans;
};

// Define a structure for the banking system
struct BankAccount {
    string accountName;
    int accountBalance;
};

// Function prototypes
void simManagementSystem();
void bankingSystem();

// SIM Management System Functions
void displaySIMMenu();
void handleSIMChoice(SIMUser &user);

// Banking System Functions
void displayBankMenu();
void handleBankChoice(BankAccount &account);

int main() {
    int systemChoice;

    cout << "Welcome to the Management System!" << endl;
    cout << "1. SIM Management System" << endl;
    cout << "2. Online Banking System" << endl;
    cout << "Enter your choice: ";
    cin >> systemChoice;

    switch (systemChoice) {
    case 1:
        simManagementSystem();
        break;
    case 2:
        bankingSystem();
        break;
    default:
        cout << "Invalid choice! Exiting..." << endl;
        break;
    }

    return 0;
}

// ================= SIM MANAGEMENT SYSTEM ===================
void simManagementSystem() {
    // Initialize a SIM user
    SIMUser user = {"John Doe", 500, 0};

    while (true) {
        displaySIMMenu();
        handleSIMChoice(user);
    }
}

void displaySIMMenu() {
    cout << "\n=== SIM Management System ===" << endl;
    cout << "1. Emergency Loan" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Like This Service" << endl;
    cout << "5. Exit SIM Management" << endl;
    cout << "Enter your choice: ";
}

void handleSIMChoice(SIMUser &user) {
    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
        // Emergency Loan
        user.loans += 50; // Add a loan of $50
        cout << "Emergency loan of $50 granted! Current loans: $" << user.loans << endl;
        break;
    case 2:
        // Deposit Money
        int deposit;
        cout << "Enter amount to deposit: ";
        cin >> deposit;
        user.balance += deposit;
        cout << "Deposit successful! New balance: $" << user.balance << endl;
        break;
    case 3:
        // Check Balance
        cout << "SIM Balance: $" << user.balance << endl;
        cout << "Outstanding loans: $" << user.loans << endl;
        break;
    case 4:
        // Like This Service
        cout << "Thank you for liking the service!" << endl;
        break;
    case 5:
        // Exit
        cout << "Exiting SIM Management System..." << endl;
        exit(0);
        break;
    default:
        cout << "Invalid choice! Try again." << endl;
        break;
    }
}

// ================= BANKING SYSTEM ===================
void bankingSystem() {
    // Initialize a bank account
    BankAccount account = {"Alice", 1000};

    while (true) {
        displayBankMenu();
        handleBankChoice(account);
    }
}

void displayBankMenu() {
    cout << "\n=== Online Banking System ===" << endl;
    cout << "1. Money Transfer" << endl;
    cout << "2. Bill Payment" << endl;
    cout << "3. Customer Service" << endl;
    cout << "4. Account Management" << endl;
    cout << "5. Exit Banking System" << endl;
    cout << "Enter your choice: ";
}

void handleBankChoice(BankAccount &account) {
    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
        // Money Transfer
        int transferAmount;
        cout << "Enter amount to transfer: ";
        cin >> transferAmount;
        if (transferAmount <= account.accountBalance) {
            account.accountBalance -= transferAmount;
            cout << "Transfer successful! Remaining balance: $" << account.accountBalance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
        break;
    case 2:
        // Bill Payment
        int billAmount;
        cout << "Enter bill amount to pay: ";
        cin >> billAmount;
        if (billAmount <= account.accountBalance) {
            account.accountBalance -= billAmount;
            cout << "Bill paid successfully! Remaining balance: $" << account.accountBalance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
        break;
    case 3:
        // Customer Service
        cout << "Contacting customer service... Please wait!" << endl;
        break;
    case 4:
        // Account Management
        cout << "Account Name: " << account.accountName << endl;
        cout << "Account Balance: $" << account.accountBalance << endl;
        break;
    case 5:
        // Exit
        cout << "Exiting Banking System..." << endl;
        exit(0);
        break;
    default:
        cout << "Invalid choice! Try again." << endl;
        
		break; }
}




