//
// Created by Kina on 2020/02/04.
//
/*
#include <iostream>
#include <cstring>
using namespace std;

class Person{
private:
    char* name;
    int age;
public:
    Person(char* myname, int myage){
        int len=strlen(myname)+1;
        name=new char[len];
        strcpy(name, myname);
        age=myage;
    }
    void ShowPersonInfo() const{
        cout<<"이름: "<<name<<endl;
        cout<<"나이: "<<age<<endl;
    }
    Person& operator=(const Person& copy){
        delete[] name;
        int len=strlen(copy.name)+1;
        name=new char[len];
        strcpy(name, copy.name);
        age=copy.age;
        return *this;
    }
    ~Person(){
        delete[] name;
        cout<<"called destructor!"<<endl;
    }
};

int main(void){
    Person man1("Lee dae jin", 27);
    Person man2("You Hye rin", 26);
    man2=man1;
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}*/
