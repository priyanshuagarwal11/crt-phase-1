#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int rollno;
    int marks;

    public:
    // default constructor
    Student(){
        name="Priyanshu";
        rollno=0;
        marks=0;    
    }
    // parameterized constructor
    Student(string name,int rollno,int marks){
        this->name=name;
        this->rollno=rollno;
        this->marks=marks;
    }
    // copy constructor
    Student(const Student &s){
        this->name=s.name;
        this->rollno=s.rollno;
        this->marks=s.marks;
    }

    Student & setName(string name){
        this->name=name;
        return *this;
    }
    Student & setMarks(int marks){
        this->marks=marks;
        return *this;
    }
    int getMarks(){
        return marks;
    }
    char calculateGrade(){
        if(marks>=90){
            return 'A';
        }else if(marks>=80){
            return 'B';
        }else if(marks>=70){
            return 'C';
        }else if(marks>=60){
            return 'D';
        }else{
            return 'F';
        }
    }


    // display report card
    void displayReportCard(){
        cout<<"Report Card"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Grade: "<<calculateGrade()<<endl;
    }
    
};

int main(){
    Student s1("Priyanshu",1,85);
   s1.setMarks(95).displayReportCard();
   s1.setName("Priyanshu Agarwal").setMarks(90).displayReportCard();
   Student s2 = s1;

    cout << "\nCopied Student Data:";
    s2.displayReportCard();

    return 0;
}