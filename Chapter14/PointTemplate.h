//
// Created by Kina on 2020/02/06.
//

#ifndef CHAPTER14_POINTTEMPLATE_H
#define CHAPTER14_POINTTEMPLATE_H

#include <iostream>

template <class T>
class Point{
private:
    T xpos, ypos;
public:
    Point(T x=0, T=0);
    void ShowPosition() const;
};

template <class T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y) { }

template <class T>
void Point<T>::ShowPosition() const{
    std::cout<<'['<<xpos<<", "<<ypos<<']'<<std::endl;
}

#endif //CHAPTER14_POINTTEMPLATE_H

