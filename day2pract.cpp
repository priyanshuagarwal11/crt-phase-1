// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {
//     // Write C++ code here
//     int a,b;
//     cin>>a>>b;
//     if(a^b){
//         cout<<"Not equal";
//     }
//     else{
//         cout<<"Equal";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
//     int x = 0;

// if (x = 5)        // assignment, not comparison!
//     cout << "True " << x;
// else
//     cout << "False " << x;

int n = 25;

if (n % 2 == 0)
    if (n % 5 == 0)
        cout << "A";
    else
        cout << "B";
else
    if (n % 5 == 0)
        cout << "C";
    else
        cout << "D";
}