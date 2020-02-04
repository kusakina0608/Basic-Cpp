//
// Created by Kina on 2020/02/03.
//
/*
#include <iostream>
#include <cstring>
using namespace std;

class Employee{
private:
    char name[100];
public:
    Employee(char* name){
        strcpy(this->name, name);
    }
    void ShowYourName() const{
        cout<<"name: "<<name<<endl;
    }
};

class PermanentWorker : public Employee{
private:
    int salary;
public:
    PermanentWorker(char* name, int money)
            : Employee(name), salary(money) { }
    int GetPay() const { return salary; }
    void ShowSalaryInfo() const {
        ShowYourName();
        cout<<"salary: "<<GetPay()<<endl<<endl;
    }
};

class EmployeeHandler{
private:
    Employee* empList[50];
    int empNum;
public:
    EmployeeHandler() : empNum(0) { }
    void AddEmployee(Employee* emp){
        empList[empNum++]=emp;
    }
    void ShowAllSalaryInfo() const {

    }
    void ShowTotalSalary() const {
        int sum=0;

        cout<<"salary sum: "<<sum<<endl;
    }
    ~EmployeeHandler(){
        for(int i=0; i<empNum; i++)
            delete empList[i];
    }
};

int main(void){
    EmployeeHandler handler;

    handler.AddEmployee(new PermanentWorker("Han", 1000));
    handler.AddEmployee(new PermanentWorker("Lee", 2000));
    handler.AddEmployee(new PermanentWorker("You", 3000));

    handler.ShowAllSalaryInfo();

    handler.ShowTotalSalary();
    return 0;
}*/
