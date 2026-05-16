// #include <iostream>
// using namespace std;

// class BankAccount {

// private:
//     string createdOn;

// protected:
//     string name;
//     int balance;
//     int accountNumber;

// public:

//     // Default Constructor
//     BankAccount() {
//         name = "Dummy";
//         accountNumber = 999999;
//         balance = 1000;
//         createdOn = "2026-01-02";
//     }

//     // Parameterized Constructor
//     BankAccount(string holderName, int holderAccountNumber, int bal) {
//         name = holderName;
//         accountNumber = holderAccountNumber;
//         balance = bal;
//     }

//     // Copy Constructor
//     BankAccount(BankAccount &account) {
//         name = account.name;
//         accountNumber = account.accountNumber;
//         balance = account.balance;
//     }

//     // Display Function
//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Balance: " << balance << endl;
//     }

//     // Getter
//     int getBalance() {
//         return balance;
//     }

//     // Setter
//     void setBalance(int newBalance) {
//         if (newBalance >= 0) {
//             balance = newBalance;
//         }
//     }

//     // Deposit Function
//     BankAccount& deposit(int amount) {
//         if (amount > 0) {
//             balance += amount;
//             cout << amount << " deposited successfully" << endl;
//         }
//         return *this;
//     }

//     // Withdraw Function
//     BankAccount& withdraw(int amount) {
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//             cout << amount << " withdrawn successfully" << endl;
//         } else {
//             cout << "Invalid withdraw amount" << endl;
//         }

//         return *this;
//     }

//     // Destructor
//     ~BankAccount() {
//         cout << "Account " << accountNumber << " deleted" << endl;
//     }
// };

// // Inheritance
// class SavingsBankAccount : public BankAccount {

// private:
//     int rate;
//     int minBalance;

// public:

//     SavingsBankAccount(string n, int bal, int accNumber,
//                        int rate, int minBalance = 1000) {

//         name = n;
//         balance = bal;
//         accountNumber = accNumber;

//         this->rate = rate;
//         this->minBalance = minBalance;
//     }

//     // Special withdraw for savings account
//     void withdraw(int amount) {

//         if (balance - amount < minBalance) {
//             cout << "Minimum balance required. Request rejected." << endl;
//             return;
//         }

//         balance -= amount;

//         cout << amount << " withdrawn successfully" << endl;
//     }

//     // Display Function
//     void display() {

//         cout << "------ Savings Account Details ------" << endl;

//         cout << "Name: " << name << endl;
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Interest Rate: " << rate << "%" << endl;
//         cout << "Minimum Balance: " << minBalance << endl;
//         cout << "Current Balance: " << balance << endl;
//     }
// };

// int main() {

//     SavingsBankAccount savingaccount("Vishal", 300000, 99999, 6);

//     cout << "Before Withdraw:" << endl;

//     savingaccount.display();

//     cout << endl;

//     savingaccount.withdraw(800);

//     cout << endl;

//     cout << "After Withdraw:" << endl;

//     savingaccount.display();

//     return 0;
// }
// #include <iostream>
// #include <ostream>
// using namespace std;
// class BankAccount {
//   // properties
//   // Data memeber
//   // By defalut everything is private
// private:
//   string createdOn;

// protected:
//   string name;
//   int balance;
//   int accountNumber;
//   // default constructor
// public:
//   BankAccount() {
//     name = "Dummy";
//     accountNumber = 999999;
//     balance = 1000;
//     createdOn = "2026-01-2";
//   }
//   // Parameterised constructor
//   BankAccount(string name, int accountNumer, int balance) {
//     this->name = name;
//     this->accountNumber = accountNumer;
//     this->balance = balance;
//     cout << "Account Created" << endl;
//   }
//   // copy constructor
//   BankAccount(BankAccount &account) {
//     name = account.name;
//     accountNumber = account.accountNumber;
//   }
//   void display() {
//     cout << name << endl;
//     cout << accountNumber << endl;
//   }
//   // Action
//   int getBalance() {
//     // if (checkAuthorised()) {
//     return balance;
//     // }
//     cout << "Unauthorised person cannot see balance" << endl;
//     return -1;
//   } // getter
//   // setter
//   void setBalance(int newBalance) {
//     if (newBalance < 0) {
//       return;
//     }
//     balance = newBalance;
//     return;
//   }
//   BankAccount &widthraw(int amount) {
//     if (amount > 0 && amount <= balance) {
//       cout << "Money dispenced successfully" << endl;
//       balance -= amount;
//       return *this;
//     }
//     cout << "Invalid amount entered";
//     return *this;
//   }
//   BankAccount &deposit(int amount) {
//     if (amount <= 0) {
//       return *this;
//     }
//     balance += amount;
//     return *this;
//   }
//   // Destructor-called when object is deleted
//   ~BankAccount() {
//     // Write logic to release funds
//     // Write logic to delete all personal data
//     cout << accountNumber << " Deleted";
//   }
// };

// class SavingsBankAccount : public BankAccount {
// protected:
//   int rate;
//   int minBalance;

// public:
//   SavingsBankAccount(string n, int bal, int accNumber, int r, int minbal = 1000)
//       : BankAccount(n, accNumber, bal), rate(r), minBalance(minbal) {
//     cout << "savings account created";
//   }
//   void widthraw(int amount) {
//     cout << balance << " " << amount << ' ' << minBalance << endl;
//     if (balance - amount < minBalance) {
//       cout << "Min balance required request rejected";
//       return;
//     }
//     balance -= amount;
//   }
//   void applyInterest() {
//     int interest = (int)((rate * balance) / 100);
//     balance += interest;
//     cout << "Interest added to bank account";
//   }
//   void display() {
//     cout << name << endl;
//     cout << rate << endl;
//     cout << minBalance << endl;
//   }
// };

// class PremiumSavingAccount : public SavingsBankAccount {
// private:
//   int Cashback;
//   int LoungeAccessRemaining;

// public:
//   PremiumSavingAccount(string name, int accountNumber, int bal, int rate)
//       : SavingsBankAccount(name, bal, accountNumber, rate), Cashback(5),
//         LoungeAccessRemaining(10) {
//     cout << "Welcome to premium Saving account";
//   }
//   void applyCashback(int amountSpent) {
//     int totalcashback = (Cashback * amountSpent) / 100;
//     balance += totalcashback;
//   }
// };

// class CurrentBankAccount : public BankAccount {
// protected:
//   int overdraft;

// public:
//   CurrentBankAccount(string name, int accNumber, int bal, int od = 50000)
//       : BankAccount(name, accNumber, bal), overdraft(od) {
//     cout << "Current Account Created";
//   }
//   void display() {
//     cout << name << endl;
//     cout << overdraft << endl;
//   }
// };

// int main() {
  // BankAccount account;
  // account.accountNumber = 12345;
  // cout << account.accountNumber;

  // Private member access outside of the class
  // BankAccount account;
  // cout << account.type;

  // Encapsulation
  // BankAccount account3;
  // account3.getBalance();

  // A constructor is automatically called when you create a object of it
  // BankAccount account4;
  // account4.display();

  // parameterised constructor
  // string name;
  // int accno;
  // cin >> name >> accno;
  // BankAccount account5(name, accno);
  // account5.display(); // akash 99999

  // Copy constructor
  // string name;
  // int accno;
  // cin >> name >> accno;
  // BankAccount savingAccount(name, accno);
  // BankAccount upgradedAccount(savingAccount);
  // savingAccount.display();
  // upgradedAccount.display();
  // cout << upgradedAccount.type;

  // Destructor
  // BankAccount account6;

  // this is a pointer that points at the current object and it can
  // be used inside the member function only
  // method chaining means using a single object you can call multiple methods
  // BankAccount account7;
  // account7.deposit(10000).widthraw(2000);
  // cout << account7.getBalance() << endl;

  // order of destructor calling is bottom up so, destructor of last object will
  // be called first
  // BankAccount account8;
  // BankAccount account9("vishal", 123456);

  // SavingsBankAccount savingaccount("vishal", 1000, 99999, 6);
  // savingaccount.display();
  // savingaccount.widthraw(800);

  // PremiumSavingAccount PremiumAccount1("vishal", 99999, 1000, 6);
  // int initialBalance = PremiumAccount1.getBalance();
  // cout << initialBalance << endl;
  // PremiumAccount1.applyCashback(100000);
  // int finalBalance = PremiumAccount1.getBalance();
  // cout << finalBalance << endl;

//   CurrentBankAccount currentAcc("vishal", 99999, 10000);
//   currentAcc.display();
// }

//bank needs to store basic details for its employees (not accounts — employees).

// Task: Define a class BankEmployee with the following members:

// string name
// int employeeId
// string department
// A display() function that prints all three fields.
// In main(), create two employee objects and call display() on each.

// #include <iostream>
// using namespace std;
// class employees{
//     public:
//     string name;
//    int employeeId;
//    string department;

//   void display(){
//     cout << "Employee Name: " << name << endl;
//         cout << "Employee ID: " << employeeId << endl;
//         cout << "Department: " << department << endl;
//   }


// };
// int main(){
//   employees em1;
//   em1.name="Priyanshu";
//   em1.employeeId=101;
//   em1.department="software enginer";
//   employees em2;
//   em2.name="sammer";
//   em2.employeeId=102;
//   em2.department="mechnical enginer";
//   em1.display();
//   em2.display();
//   return 0;
// }
