//
// Created by Kina on 2020/02/03.
//
/*
#include <iostream>
using namespace std;

class Person{
public:
    void Sleep(){ cout<<"Sleep"<<endl; }
    ~Person(){
        cout<<"~Person()"<<endl;
    }
};

class Student : public Person{
public:
    void Study() { cout<<"Study"<<endl; }
    ~Student(){
        cout<<"~Student()"<<endl;
    }
};

class PartTimeStudent : public Student{
public:
    void Work() { cout<<"Work"<<endl; }
    ~PartTimeStudent(){
        cout<<"~PartTimeStudent()"<<endl;
    }
};

int main(void){
    Person* ptr1 = new Student();
    Person* ptr2 = new PartTimeStudent();
    Student* ptr3 = new PartTimeStudent();

    ptr1->Sleep();
    ptr2->Sleep();
    ptr3->Study();
    delete ptr1; delete ptr2; delete ptr3;
    return 0;
}*/
