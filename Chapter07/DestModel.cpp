//
// Created by Kina on 2020/02/03.
//
/*
#include <iostream>
#include <cstring>
using namespace std;

class Person{
private:
    char* name;
public:
    Person(char* myname){
        name=new char[strlen(myname)+1];
        strcpy(name, myname);
    }
    ~Person(){
        delete[] name;
    }
    void WhatYourName() const{
        cout<<"My name is "<<name<<endl;
    }
};

class UnivStudent : public Person{
private:
    char* major;
public:
    UnivStudent(char* myname, char* mymajor)
    :Person(myname){
        major=new char[strlen(mymajor)+1];
        strcpy(major, mymajor);
    }
    ~UnivStudent(){
        delete[] major;
    }
    void WhoAreYou() const{
        WhatYourName();
        cout<<"My major is "<<major<<endl<<endl;
    }
};

int main(void){
    UnivStudent st1("Han", "Mathematics");
    st1.WhoAreYou();
    UnivStudent st2("You", "Physics");
    st2.WhoAreYou();
    return 0; "Where is THE HOT GIRL you told?"
}*/
