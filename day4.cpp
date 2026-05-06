// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"number:";
//     cin>>n;
//     // even number print krna h
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             cout<<i<<" ";
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"number:";
//     cin>>n;
//     // odd number print krna h
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             cout<<i<<" ";
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=5;i++){
//         for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//     }
// }

// user input dega hume uska * pattern print krna h
// n*n 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"number :";
//     cin>>n;
//    for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// holosquare pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){  
//             if(i==1 || i==n || j==1 || j==n){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
             
//         }
//         cout<<endl;
// }
// }

// prnt rombus
// #include<iostream>   
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i-1;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n;j++){
//         cout<<"*";
//     }
//     cout<<endl;  
//     }
// }    


// *
// **
// ***
// ****
// *****
// ******
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"numbers:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"numbers";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// 1
// 12

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"number:";
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// #include<iostream>
// using namespace std;
// int main(){
    
//      int n;
//     cout<<"number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
       
// }

// ***
// **
// *
// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//     cout<<"number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// 1
// 21
// 321
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std; 
// int main(){
//     int n;
//     cout<<"number :";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=i-1;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;

//     }

// }

// *****
//  ***
//   *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<i;j++){
//             cout<<" ";

//         }
//         for(int j=i;j<=n-i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;     
//     }
// }

// #include<iostream>
// using namespace std; 
// int main(){
//     int n;
//     cout<<"number :";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=i-1;j>=1;j--){
//             cout<<j;
//         }
        
        
//         cout<<endl;

//     }

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"number:";
//     cin>>n;
//      n=n/2;
//     for(int i=1;i<=n;i++ ){
//         for(int count=1;count<=2;count++)
//         for(int j=1;j<=2*i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std; 
// int main(){
//     int n;
//     cout<<"number :";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=i-1;j>=1;j--){
//             cout<<j;
//         }
//         // reverse karna h
    
//         cout<<endl;

//     }

// }

