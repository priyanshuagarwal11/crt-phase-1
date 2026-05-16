#include <iostream>
#include <ostream>
using namespace std;
class BankAccount {
  // properties

  // Data memeber
  // By defalut everything is private
private:
  string createdOn;

protected:
  string name;
  int balance;
  int accountNumber;
  // default constructor
  BankAccount() {
    name = "Dummy";
    accountNumber = 999999;
    balance = 1000;
    createdOn = "2026-01-2";
  }
  // Parameterised constructor
  BankAccount(string name, int holderAccountNumber) {
    name = name;
    accountNumber = holderAccountNumber;
  }
  // copy constructor
  BankAccount(BankAccount &account) {
    name = account.name;
    accountNumber = account.accountNumber;
  }
  void display() {
    cout << name << endl;
    cout << accountNumber << endl;
  }
  // Action
  int getBalance() {
    // if (checkAuthorised()) {
    return balance;
    // }
    cout << "Unauthorised person cannot see balance" << endl;
    return -1;
  } // getter
  // setter
  void setBalance(int newBalance) {
    if (newBalance < 0) {
      return;
    }
    balance = newBalance;
    return;
  }
  BankAccount &widthraw(int amount) {
    if (amount > 0 && amount <= balance) {
      cout << "Money dispenced successfully" << endl;
      balance -= amount;
      return *this;
    }
    cout << "Invalid amount entered";
    return *this;
  }
  BankAccount &deposit(int amount) {
    if (amount <= 0) {
      return *this;
    }
    balance += amount;
    return *this;
  }
  // Destructor-called when object is deleted
  ~BankAccount() {
    // Write logic to release funds
    // Write logic to delete all personal data
    cout << accountNumber << " Deleted";
  }
};

class SavingsBankAccount : BankAccount {
private:
  int rate;
  int minBalance;

public:
  SavingsBankAccount(string n, int bal, int accNumber, int rate,
                     int minBalance = 1000): BankAccount(n, accNumber,bal) {
    name = n;
    balance = bal;
    accountNumber = accNumber;
    this->rate = rate;
    this->minBalance = minBalance;
  }
  void widthraw(int amount) {
    if (balance - amount < minBalance) {
      cout << "Min balance required request rejected";
      return;
    }
    balance -= amount;
  }

  void interestrate() {
   int interest = (int)(balance * rate) / 100;
   balance += interest;
   cout<<"interest added to bank account"<<endl;
  }
  void display() {
    cout << name << endl;
    cout << rate << endl;
    cout << minBalance;
  }

  class PremiumAccount : SavingsBankAccount{
   private:
   int cashback;
   int loungeAccessRemaining;
   PremiumAccount(string name,int accountNunber,int balance,) 
  }
};

int main() {
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

  SavingsBankAccount savingaccount("vishal", 1000, 99999, 6);
  savingaccount.display();
  savingaccount.widthraw(800);
  savingaccount.display();

 

  savingaccount.interestrate();
  savingaccount.display();

}