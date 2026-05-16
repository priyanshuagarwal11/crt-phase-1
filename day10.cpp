
// //how to insert at a given position in an array



// #include <iostream>
// using namespace std;

// int main() {

//     int arr[100];
//     int size,insert, value;

//     cout << "Enter size of array: ";
//     cin >> size;

//     cout << "Enter array elements: ";
//     for(int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter position (index): ";
//     cin >> insert;

//     cout << "Enter value to insert: ";
//     cin >> value;

//     // Shift elements to right
//     for(int i = size; i > insert; i--) {
//         arr[i] = arr[i - 1];
//     }

//     // Insert value
//     arr[insert] = value;

//     size++;

//     cout << "Array after insertion: ";

//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//     int arr[100];
//     int size, index;

//     cout << "Enter size of array: ";
//     cin >> size;

//     cout << "Enter array elements: ";
//     for(int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter index to delete: ";
//     cin >> index;

//     // Shift elements left
//     for(int i = index; i < size - 1; i++) {
//         arr[i] = arr[i + 1];
//     }

//     size--;

//     cout << "Array after deletion: ";

//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// // you are given an array 1,2,3,4,5->5,1,2,3,4
// #include<iostream>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>k;

// }

// prefix sum array

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     int l=0;
//     int r=4;
//     int prefix[n];
//     prefix[0]=arr[0];
//     for(int i=1;i<n;i++){
//         prefix[i]=prefix[i-1]+arr[i];
//     }
//     // for(int i=1;i<n;i++){
//     //     prefix[i]=prefix[r]-prefix[l-1];
//     // }

//     //prefix product
//     //prefix xor
//     int sum=prefix[r]-prefix[l-1];
//     if(l == 0)
//     sum = prefix[r];
// else
//     sum = prefix[r] - prefix[l-1];
    
//     cout<<"sum"<<sum;
//     // for(int i=0;i<n;i++){
//     //     cout<<prefix[i]<<" ";
//     // }

// }


// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {

//     int arr[] = {10, 50, 20, 80, 40};
//     int n = 5;

//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;

//     for(int i=0; i<n; i++) {

//         if(arr[i] > largest) {
//             secondLargest = largest;
//             largest = arr[i];
//         }

//         else if(arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }

//     cout << "Largest = " << largest << endl;
//     cout << "Second Largest = " << secondLargest;
// }
#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 50, 80, 80, 40};
    int n = 5;

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i=1; i<n; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }

        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    
    cout << secondLargest;
}