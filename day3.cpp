// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         cout<<"A";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     // for(int i=0;i<4;i+=2)
//     // {
//     //     cout<<"A";
//     // }
//     // int i;

//     // while(i<4){
//     //     cout<<i;
//     //     i++;
//     // }


//     // for(int i=10;i>0;i-=3){
//     //     cout<<i;
//     // }

//     // int n=64;
//     // int c=0;
//     // while(n>1){
//     //     n=n/2;
//     //     c++;    
//     // }
//     // cout<<c;


// }


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<i<<endl;
//     }
// }

//switch case

// #include<iostream>
// using namespace std;
// int main()
// {
//     switch(1){
//         case 1:
//         cout<<"Hello"<<endl;
//         break;
//         case 2:
//         cout<<"World";
    
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     for(int i=1;i<=10;i++){
        
//         cout<<i;
//         sum=sum+i;
//         cout<<sum;

//     }
// }

// print week days name using switch case
// #include<iostream>
// using namespace std;
// int main(){
//     int day;
//     cout<<"enter day number (1-7): ";
//     cin>>day;
//     switch(day){
//         case 1:
//             cout<<"Monday";
//             break;      
//         case 2:
//             cout<<"Tuesday";    
//             break;
//         case 3: 
//             cout<<"Wednesday";    
//             break;
//         case 4:
//             cout<<"thursday";
//             break;
//         case 5:
//             cout<<"friday";
//             break;
//         case 6: 
//         cout<<"saturday";
//         break;
//         case 7:
//             cout<<"sunday";
//             break;
//         default:
//             cout<<"invalid day number";

// }
// }

// sum 1 to 10 all natural numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     for(int i=1;i<=10;i++){
//         cout<<i;
//         sum+=i;
//         cout<<sum;

// }
// }

// display n terms of their sum
// #include<iostream>
// using namespace std;
// int main(){ 
//     int n;
//     cout<<"n :";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//         cout<<sum<<" ";
//     }
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"n :";
    cin>>n;
    int original=n;
    int reverse=0;
    while(n>0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(original==reverse){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
}