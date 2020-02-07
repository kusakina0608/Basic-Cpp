//
// Created by Kina on 2020/02/06.
//

#ifndef CHAPTER14_ARRAYTEMPLATE_H
#define CHAPTER14_ARRAYTEMPLATE_H

#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class BoundCheckArray{
private:
    T* arr;
    int arrlen;
    BoundCheckArray(const BoundCheckArray& arr) { }
    BoundCheckArray& operator=(const BoundCheckArray& arr) { }
public:
    BoundCheckArray(int len);
    T& operator[](int idx);
    T operator[](int idx) const;
    int GetArrLen() const;
    ~BoundCheckArray();
};

template <class T>
BoundCheckArray<T>::BoundCheckArray(int len) : arrlen(len){
    arr = new T[len];
}

template <class T>
T& BoundCheckArray<T>::operator[](int idx){
    if(idx<0 || idx>=arrlen){
        cout<<"Array index out of bound exception"<<endl;
        exit(1);
    }
    return arr[idx];
}

template <class T>
T BoundCheckArray<T>::operator[](int idx) const{
    if(idx<0 || idx>=arrlen){
        cout<<"Array index out of bound exception"<<endl;
        exit(1);
    }
    return arr[idx];
}

template <class T>
int BoundCheckArray<T>::GetArrLen() const {
    return arrlen;
}

template <class T>
BoundCheckArray<T>::~BoundCheckArray() {
    delete[] arr;
}

#endif //CHAPTER14_ARRAYTEMPLATE_H