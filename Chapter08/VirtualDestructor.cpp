//
// Created by Kina on 2020/02/04.
//
/*
#include <iostream>
using namespace std;

class First{
private:
    char * strOne;
public:
    First(char* str){
        strOne=new char[strlen(str)+1];
        strcpy(strOne, str);
    }
    ~First(){
        cout<<"~First()"<<endl;
        delete[] strOne;
    }
};

class Second: public First{
private:
    char* strTwo;
public:
    Second(char* str1, char* str2) : First(str1){
        strTwo=new char[strlen(str2)+1];
        strcpy(strTwo, str2);
    }
    ~Second(){
        cout<<"~Second()"<<endl;
        delete[] strTwo;
    }
};

int main(void){
    First* ptr=new Second("simple", "complex");
    delete ptr;
    return 0;
}*/
