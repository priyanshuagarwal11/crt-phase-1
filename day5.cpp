// craete function of maximum of two numbers
// #include<iostream>
// using namespace std;
// int max(int a,int b){
//     if(a>b){
//         return a;
//     }else{
//         return b;
//     }

// }
// int main(){
//  cout<<max(1,2);
// }
// // maximum of three numbers

// given number square
// #include<iostream>
// using namespace std;
// int square(int a){
//     return a*a;
// }
// int main(){
//     cout<<square(5);
// }

// create function 4 parameters and 2 default and jo 2 hue h unme maximum niklana h 


// #include<iostream>
// using namespace std;
// int max(int a,int b,int c=1,int d=1){

//    switch(maxi){
//     case 1:
        
//    }
      
// }
// int main(){
//     cout<< max();
// }


// create function 4 parameters and 2 default and jo 2 hue h unme maximum niklana h 
// #include<iostream>
// using namespace std;
// int factor=2;
// int compute(int x,int y=factor*10){
//     return x+y;
// }
// int main(){
//     cout<<compute(5)<<endl;
//     factor =7;
//      cout<<compute(5)<<endl;
//       cout<<compute(5,1)<<endl;
// }
// find fibonacci using recursion

// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n==1)return 0;
//     if(n==2)return 1;
    
//     int ans=fib(n-1)+fib(n-2);
//     return ans;


    
// }
// int main(){
// cout<<fib(8);
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int* ptr=&a;
//     cout<<ptr<<endl;
//     char b='A';
//     char* ptr2=&b;
//     cout<<ptr2<<endl;

// }


// #include<iostream>
// using namespace std;
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;

// }
// int main(){
//     int a=10;
//     int b=20;
//     swap(&a,&b);
//     cout<<a<<" b="<<b<<endl;
// }

// #include<iostream>
// using namespace std;


// int main(){
//     //refence variable
//     int a=10;
//     int &ref=a; 
//     cout<<a<<" "<<ref<<endl;
//     ref=20;
//     cout<<a<<" "<<ref<<endl;    

// }

// find factoril using function using recursion
// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//  if(n==0) return 1;
//  return n* fact(n-1);
// }

// int main(){
//  cout<<fact(6);
// }

// create function is prime or not
// #include<iostream>
// using namespace std;
// int prime(int n){
//     if (n <= 1) return false;
//     for(int i=0;i<=n;i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }
// int main(){
// cout<<prime(3);
// }

//count digits
// #include<iostream>
// using namespace std;

// int countDigits(int n) {
//     int count = 0;
//     while (n != 0) {
//         n /= 10;
//         count++;
//     }
//     return count;
// }


// int main(){
// int n;
// cout<<"number :";
// cin>>n; 
// cout<<"number of digits :"<<countDigits(n);
// }

// call by value
// #include<iostream>
// using namespace std;
// void changes (int x){
//     x=100;
// }
// int main(){
//     int a=10;
//     changes(a);
//     cout<<a;
// }

// call by reference
// #include<iostream>  
// using namespace std;
// void changes (int &x){
//     x=100;
// }
// int main(){ 
//     int a=10;
//     changes(a);
//     cout<<a;
// }

//default argument
// #include<iostream>
// using namespace std;
// int compute(int x,int y=10){        
//     return x+y;
// }
// int main(){
//     cout<<compute(5)<<endl;
//     cout<<compute(5,1)<<endl;   
// }

//nested function   call
// #include<iostream>
// using namespace std;
// int add(int a,int b){
//     return a+b;
// }
// int multiply(int a,int b){
//     return a*b;
// }
// int main(){
//     cout<<add(multiply(2,3),multiply(1,4));
// }

//pass by pointer
// #include<iostream>
// using namespace std;
// void inc(int *p){
//     *p=*p+1;
// }
// int main(){
//     int a=7;
//     inc(&a);
//     cout<<a;
// }

// recusion power
// #include<iostream>
// using namespace std;
// int power(int x,int n){ 
//     if(n==0) return 1;
//     return x*power(x,n-1);
// }
// int main(){
//     int x,n;
//     cout<<"x :";        
//     cin>>x;
//     cout<<"n :";
//     cin>>n;
//     cout<<power(x,n);
// }   

//multiply return paths
#include<iostream>
using namespace std;
int classify(int n){
    if(n>0) return 1;
    else if(n<0) return -1;
    else return 0;
}
