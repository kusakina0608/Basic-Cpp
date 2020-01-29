//
// Created by Kina on 2020/01/29.
//

#ifndef CHAPTER04_RECTANGLE_H
#define CHAPTER04_RECTANGLE_H
#include "Point.h"

class Rectangle {
private:
    Point upLeft;
    Point lowRight;
public:
    Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
    void ShowRecInfo() const;
};
#endif //CHAPTER04_RECTANGLE_H
