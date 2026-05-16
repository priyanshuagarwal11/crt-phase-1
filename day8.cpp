// #include <iostream>
// using namespace std;
// class A {
// public:
//   void show() { cout << "A method"; }
// };
// class B {
// public:
//   void show() { cout << "B method"; }
// };
// class C : public A, public B {
//   public:
//   void change(){
//     A::show();
//   }
// };
// int main() {
//   C a;
//   a.A::show();
//   // A a;
//   // (a.fun1().fun2());
//   // a.a;
// }

// #include <iostream>
// using namespace std;
// class vehicle{
//     public:
//     vehicle(){
//         cout<<"this is a vehicle"<<endl;
//     }
// };

// class fare{
    
//         public:
//         fare(){
//             cout<<"this is fare";
//         }
    
// };

// class car:public vehicle{};
// class bus:public vehicle,public fare{};
// int main(){
//     bus obj2;

// }

//polymorphism-
// 1. run time pol-,2.compile time
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int show(int c,int b){
//         return c+b;
//     }
    
// };

// class B:A{
//     public:
//     int show(int c,int b){
//         cout<<"overriding";
//         return c+b;
//     }
// };
// int main(){
//     B b;
//     cout<<b.show(1,2);
// }

#include <iostream>
using namespace std;
class A {
public:
  virtual void show() { cout << "Base class" << endl; }
};
class B : public A {
public:
  void show() { cout << "B method"; }
};
class C : public A {
  void show() { cout << "C method"; }
};
int main() {
  // B b;
  C c;
  // A *newb = &b;
  A *newc = &c;
  // A* newC = &c;
  newc->show();
  // A a;
  // cout << a.show(1, 2) << endl;
  // cout << a.show(1, 2, 3) << endl;
  // cout << a.show(1, 2.0) << endl;
  // cout << a.show(1.0, 2.0) << endl;
  // cout << a.show(1.9, 1) << endl;
  // cout << a.show(1, 2, 3) << endl;

  // a.A::show();
  // A a;
  // (a.fun1().fun2());
  // a.a;
}// compelx