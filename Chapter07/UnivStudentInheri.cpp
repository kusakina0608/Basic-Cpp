//
// Created by Kina on 2020/02/03.
//
/*
#include <iostream>
#include <cstring>
using namespace std;

class Person{
private:
    int age;
    char name[50];
public:
    Person(int myage, char* myname): age(myage){
        strcpy(name, myname);
    }
    void WhatYourName() const{
        cout<<"My name is "<<name<<endl;
    }
    void HowOldAreYou() const{
        cout<<"I'm "<<age<<" years old"<<endl;
    }
};

class UnivStudent : public Person{
private:
    char major[50];
public:
    UnivStudent(char* myname, int myage, char* mymajor)
    : Person(myage, myname){
        strcpy(major, mymajor);
    }
    void WhoAreYou() const{
        WhatYourName();
        HowOldAreYou();
        cout<<"My major is "<< major<<endl<<endl;
    }
};

int main(void){
    UnivStudent ustd1("Lee", 27, "Computer eng.");
    ustd1.WhoAreYou();

    UnivStudent ustd2("Han", 28, "Electronic eng.");
    ustd2.WhoAreYou();
    return 0;
}*/
