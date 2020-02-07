//
// Created by Kina on 2020/02/07.
//
/*
#include <iostream>
#include <cstring>
using namespace std;

class AccountException{
public:
    virtual void ShowExceptionReason()=0;
};

class DepositException : public AccountException{
private:
    int reqDep;
public:
    DepositException(int money) : reqDep(money) { }
    void ShowExceptionReason(){
        cout<<"[예외 메시지: "<<reqDep<<"는 입금불가]"<<endl;
    }
};

class WithdrawException : public AccountException{
private:
    int balance;
public:
    WithdrawException(int money) : balance(money) { }
    void ShowExceptionReason(){
        cout<<"[예외 메시지: 현재 잔액 "<<balance<<", 잔액부족]"<<endl;
    }
};

class Account{
private:
    char accNum[50];
    int balance;
public:
    Account(char* acc, int money) : balance(money){
        strcpy(accNum, acc);
    }
    void Deposit(int money) throw(AccountException){
        if(money<0){
            DepositException expn(money);
            throw expn;
        }
        balance+=money;
    }
    void Withdraw(int money) throw(AccountException){
        if(money>balance)
            throw WithdrawException(balance);
        balance-=money;
    }
    void ShowMyMoney(){
        cout<<"잔고: "<<balance<<endl<<endl;
    }
};

int main(void){
    Account myAcc("082-106633-01-019", 1000000);

    try{
        myAcc.Deposit(200000);
        myAcc.Deposit(-372000);
    }
    catch(AccountException& expn){
        expn.ShowExceptionReason();
    }
    myAcc.ShowMyMoney();

    try{
        myAcc.Withdraw(372000);
        myAcc.Withdraw(1000000);
    }
    catch(AccountException& expn){
        expn.ShowExceptionReason();
    }
    myAcc.ShowMyMoney();
    return 0;
}*/
