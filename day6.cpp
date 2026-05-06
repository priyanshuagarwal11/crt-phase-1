// #include <iostream>
// using namespace std;

// int Max(int a, int b, int c = INT_MIN, int d = INT_MIN) {
//   if (a > b && a > c && a > d) {
//     return a;
//   } else if (b > a && b > c && b > d) {
//     return b;
//   } else if (c > a && c > b && c > d) {
//     return c;
//   } else {
//     return d;
//   }
// }
// int main() {
//   int a, b;
//   cin >> a >> b;
//   cout << Max(a, b, 10, 20);
// }

//method chaining ->

//oops
#include <iostream>
using namespace std;
class BankAccount {
    public:
    string CreatedOn;
    int balance;
    public:
    int accountNumber;
    string name;
     string type;
        // deafult constructor
     BankAccount(){
        CreatedOn="01-01-2020";
        balance=0;
        accountNumber=123456;
        name="dummy";
        type="savings";
     }
     //parameterized constructor

     BankAccount(string CreatedOn, int balance, int accountNumber, string name, string type){
        // this pointer is used to refer to the current object
        this->CreatedOn=CreatedOn;
        this->balance=balance;
        this->accountNumber=accountNumber;
        this->name=name;  
        this->type=type;
     }
     //copy constructor
       BankAccount(BankAccount &account){
            CreatedOn=account.CreatedOn;
            name=account.name;
            type=account.type;
            balance=account.balance;
            accountNumber=account.accountNumber;
        }

        // create depoit and withdraw methods a given amount
        // 1.write a function to deposit a gievn aamount into you account object it should be handle all edge cases
        //2.write a function to withdraw a gievn amount from your acoutn

        // void deposit(int amount){
        //     if(amount<0){
        //         cout<<"Invalid amount"<<endl;
        //         return;
        //     }
        //     balance+=amount;
        // }
        // void withdraw(int amount){
        //     if(amount<0){
        //         cout<<"Invalid amount"<<endl;
        //         return;
        //     }
        //     if(amount>balance){
        //         cout<<"Insufficient balance"<<endl;
        //         return;
        //     }
        //     balance-=amount;
        // }

       


     int getBalance(){
        return balance;}
        void setBalance(int newbal){
            if(newbal<0){
                return;
            }
            balance = newbal;
        }
    string getCreatedDate(){
        return CreatedOn;
    }
    int getaccountNumber(){
        return accountNumber;
    }
    string getname(){
        return name;    
    }
    string gettype(){
        return type;
    }
// method chaining 
    BankAccount &setHolderName(string name){
        this->name=name;
        return *this;

    }
    BankAccount &setAccountType(string type){
        this->type=type;
        return *this;

    }

    // 1.write a function to deposit a gievn aamount into you account object it should be handle all edge cases
        //2.write a function to withdraw a gievn amount from your acoutn

        BankAccount& deposit(int amount){
            if(amount<0){
                cout<<"Invalid amount"<<endl;
                return *this;
            }
            balance+=amount;
            return *this;
        }

        BankAccount& withdraw(int amount){
            if(amount>0 && amount <=balance){
                balance-=amount;
        }else{
            cout<<"invalid amount";
        }
        }

    //



    void display(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Type: "<<type<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Created On: "<<CreatedOn<<endl;
    }

    ~BankAccount(){
        cout<<"Destructor called for account number: "<<accountNumber<<endl;
        cout<<"logging is done"<<endl;
    }

 };
int main(){
BankAccount bank;
// cout<<bank.getBalance()<<endl;
// bank.setBalance(1000);
// cout<<bank.getBalance()<<endl;
// cout<<bank.getCreatedDate()<<endl;

BankAccount bank2("01-01-2021", 5000, 654321, "John Doe", "savings");
bank2.display();
// BankAccount bank3(bank2);
// bank3.display();
// bank2.setBalance(1200);
// bank2.setHolderName("Jane Doe").setAccountType("current");
// bank2.display();
 //deposit and withdraw test
 BankAccount testAccount("2004-01-0",10000,989797,"vishal","savings");
    testAccount.deposit(10000).withdraw(2000);
    cout<<testAccount.getBalance();



}