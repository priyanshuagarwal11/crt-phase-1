// #include<iostream>
// using namespace std;
// int main(){
//   int a=0,b=1,c=2,d;
//   d = ++a || b++ && c++ && a++;
//   cout<<a<<b<<c<<d;
//   cout<< 5||3;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num1 = 5;
//     int num2 = 3;
//     int num3 = 2;
//     num1 = ++num2;
//     num2 = --num3;
//     cout << num1 << " " << num2 << " " << num3;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     a = 2;
//     b = 7;
//     c = (a > b) ? a : b;
//     cout << c;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     // using if else create calculator
//     int a;
//     cout<<"a:";
//     cin>>a;     
//     int b;  
//     cout<<"b:";
//     cin>>b;
//     char op;
//     cout<<"operator :"; 
//     cin>>op;
//     if(op=='+'){    
//         cout<<"addition of two number:"<<a+b<<endl;
//     }
//     else if(op=='-'){
//         cout<<"substraction of two number:"<<a-b<<endl;
//     }
//     else if(op=='/'){
//         cout<<"division of two number:"<<a/b<<endl;
//     }
//     else if(op=='*'){
//         cout<<"multiplication of two number:"<<a*b<<endl;
//     }
//     else{
//         cout<<"invalid operator";
//     }

// }

//writea program to anumber is even or odd
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"number is: "<<endl;
//     cin>>a;
//     if(a%=1){
//         cout<<"number is even"<<endl;
//     }else{
//         cout<<"number is odd";
//     }
// }

// given three number ka largets value niklani h
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"a :";
//     cin>>a;
//      int b;
//     cout<<"b :";
//     cin>>b;
//      int c;
//     cout<<"c :";
//     cin>>c;
//     if(a>b && a>c){
//         cout<<"A is largest"<<endl;
//     }else if(b>a && b>c){
//         cout<<"B is largest"<<endl;
//     }else{
//         cout<<"C is largest"<<endl;
//     }
// }

//

// given year is leap year or not
// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"year :";
//     cin>>year;
//     if(year%4==0){
//         cout<<"leap year"<<endl;
//     }else{
//         cout<<"not a leap year"<<endl;
//     }
// }


// traingle ki dimension given h hume yeh dekhna h ki yeh traingle valid dimension h ya nhii
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"a :";
//     cin>>a;
//      cout<<"b :";
//     cin>>b;
//      cout<<"c :";
//     cin>>c;
//     if(a+b>c  && a+c>b && b+c>a){
//         cout<<"valid";
//     }else{
//         cout<<"not valid";
//     }

// }

// chekc two numbers is equals or not without using relational operator

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"a :";
//     cin>>a;
//      cout<<"b :";
//     cin>>b;
//     if(a^b){
//         cout<<"not equal";
//     }else{
//         cout<<"equal";  
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"a :";
//     cin>>a;
//      cout<<"b :";
//     cin>>b;
//     if(a-b){
//         cout<<"not equal";
//     }else
//     cout<<"equal";
// }


// given two numbrs un dono ko multiply krna h or usme batanan h ki ki answer positive aaega ya negative ya 0 magar code me multiply nhi krke dikhanan

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"a :";
//     cin>>a;
//      cout<<"b :";
//     cin>>b;
//     if((a>0 && b>0) || (a<0 && b<0)){
//         cout<<"positive";
//     }else if((a>0 && b<0) || (a<0 && b>0)){
//         cout<<"negative";
//     }
//     else{
//         cout<<"0";
//     }
// }

#include <iostream>
using namespace std;

int main() {
    string username, password;
    int attempts = 3;

    while(attempts > 0) {
        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        if(username == "admin" && password == "1234") {
            cout << "Welcome Admin";
            return 0;
        } else {
            attempts--;
            cout << "Wrong credentials! Attempts left: " << attempts << endl;
        }
    }

    cout << "Account Locked";

    return 0;
}