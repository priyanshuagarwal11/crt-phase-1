// #include<iostream>
// using namespace std;
// class Stack{
//     int arr[100];
//     int top;

// };
// int main(){
    //create stack it is last in first out
    // stack<int> s;

    // s.push(10);
    // s.push(20);
    // s.push(30);

    // cout << s.top() << endl; // 30

    // s.pop();
    // s.push(40);

    // cout << s.top() << endl; // 20


    // arr[]={1,2,3,4,5,6,7,8,9,}
   

// }

#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
    Node* top;

public:

    Stack() {
        top = NULL;
    }
    void push(int x) {

        Node* newNode = new Node(x);

        newNode->next = top;

        top = newNode;

        cout << x << " pushed into stack\n";
    }

    void pop() {

        if(top == NULL) {
            cout << "Stack Underflow\n";
            return;
        }

        Node* temp = top;

        top = top->next;

        delete temp;
    }
    int peek() {

        if(top == NULL) {
            cout << "Stack is Empty\n";
            return -1;
        }

        return top->data;
    }
    bool isEmpty() {
        return top == NULL;
    }

    void display() {

        Node* temp = top;

        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top Element: " << s.peek() << endl;

    s.pop();

    s.display();

    return 0;
}
