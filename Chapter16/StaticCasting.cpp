//
// Created by Kina on 2020/02/07.
//
/*
#include <iostream>
using namespace std;

class Car{
private:
    int fuelGauge;
public:
    Car(int fuel) : fuelGauge(fuel) { }
    void ShowCarState() { cout<<"잔여 연료량: "<<fuelGauge<<endl; }
};

class Truck : public Car{
private:
    int freightWeight;
public:
    Truck(int fuel, int weight) : Car(fuel), freightWeight(weight) { }
    void ShowTruckState(){
        ShowCarState();
        cout<<"화물의 무게: "<<freightWeight<<endl;
    }
};

class Computer{
private:
    float clock;
};

int main(void){
    Car* pcar1=new Truck(80, 200);
    Truck* ptruck1=static_cast<Truck*>(pcar1);
    ptruck1->ShowTruckState();
    cout<<endl;

    Car* pcar2=new Car(120);
    Truck* ptruck2=static_cast<Truck*>(pcar2);
    ptruck2->ShowTruckState();

    Car* pcar3=new Car(120);
    Computer* pcom=static_cast<Computer*>(pcar3);

    int num(5);
    float fnum=static_cast<float>(num);

    int* pnum=new int(3);
    float* pfloat=static_cast<float*>(pnum);
    return 0;
}*/
