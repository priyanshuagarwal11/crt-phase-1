// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// class Complex{
//     public:
//     int r,i;
//     Complex(){
//     }
//     Complex(int r,int i){
//         this->r = r;
//         this->i = i;
//     }
//     Complex add(Complex d){
//         Complex addition;
//         addition.r = this->r + d.r;
//         addition.i = this->i + d.i;
//         return addition;
//     }
//     Complex operator+(Complex &d){
//         Complex addition;
//         addition.r = this->r + d.r;
//         addition.i = this->i + d.i;
//         return addition;
//     }

//     Complex operator++(){
//         Complex increment;
//         increment.r = this->r + 1;
//         increment.i = this->i + 1;
//         return increment;
//     }
// };
// int main() {
//     Complex c1(1,2);
//     Complex c2(2,3);
//     // Complex addition = c1.add(c2);
//     // Complex addition = c1 + c2;
//     // cout<<addition.r<<' '<<addition.i;
//     Complex increment = ++c1;
//     cout<<increment.r<<' '<<increment.i;
// }

// unary operator overloading
// #include <iostream>
// using namespace std;
// class Complex{
//     public:
//     int r,i,h;
//     Complex(){
//     }
//     Complex(int r,int i,int h){
//         this->r = r;
//         this->i = i;
//         this->h = h;
//     }       
//     Complex operator-(){
//         Complex negation;
//         negation.r = -this->r;
//         negation.i = -this->i;
//       negation.h = -this->h;
//         return negation;
//     }
// };
// int main() {
//     Complex c1(1,2,4);
//     Complex negation = -c1;     
//     cout<<negation.r<<' '<<negation.i<<' '<<negation.h;
//     return 0;
// }   

// Abstraction is hiding the implimentstaion details and showing only the functionality to the user
// #include <iostream> 
// using namespace std;
// class database{
//     public:
//     virtual void read()=0;
// };
// class HR: database{
//     public:
//     void read() override{
//         cout<<"Reading HR data"<<endl;
//     }
// };
// int main(){
//     database* db = new HR();
  
//     HR hr;
//     hr.read();
//     cout<<"hello world";
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Calculator{
//     public:
//     virtual int calculate(int a,int b)=0;
// };
// class Area: Calculator{
//     public:
//     int calculate(int a,int b) override{
//         return a*b;
//     }
// };

// class Perimeter: Calculator{
//     public:
//     int calculate(int a,int b) override{
//         return 2*(a+b);
//     }
// };

// int main(){
//     Area area;
//     Perimeter p;
//     cout<<"Area of rectangle: "<<area.calculate(5,10)<<endl;
//     cout<<"Perimeter of rectangle: "<<p.calculate(5,10)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Abstract Class
// class Shape {
// public:
//     // Pure virtual functions
//     virtual float area() = 0;
//     virtual float perimeter() = 0;
//     virtual void display() = 0;
// };

// // Circle Class
// class Circle : public Shape {
// private:
//     float radius;

// public:
//     Circle(float r) {
//         radius = r;
//     }

//     float area() {
//         return 3.14 * radius * radius;
//     }

//     float perimeter() {
//         return 2 * 3.14 * radius;
//     }

//     void display() {
//         cout << "Shape: Circle" << endl;
//         cout << "Area: " << area() << endl;
//         cout << "Perimeter: " << perimeter() << endl;
//     }
// };

// // Rectangle Class
// class Rectangle : public Shape {
// private:
//     float width, height;

// public:
//     Rectangle(float w, float h) {
//         width = w;
//         height = h;
//     }

//     float area() {
//         return width * height;
//     }

//     float perimeter() {
//         return 2 * (width + height);
//     }

//     void display() {
//         cout << "Shape: Rectangle" << endl;
//         cout << "Area: " << area() << endl;
//         cout << "Perimeter: " << perimeter() << endl;
//     }
// };

// int main() {

//     Circle c(5);
//     Rectangle r(4, 6);

//     cout << "Circle Details" << endl;
//     c.display();

//     cout << endl;

//     cout << "Rectangle Details" << endl;
//     r.display();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int count() {
//     static int x = 0;
//     x++;
//     return x;
// }

// int main() {

//     for(int i = 1; i <= 5; i++) {
//         cout << count() << endl;
//     }

//     return 0;
// }



//. array
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
        

    }
    cout<<sum<<endl;
}

//Array- values chnegs kar skte h amagar size changes nhi hoti
