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
    bool InitMembers(const Point &ul, const Point &lr);
    void ShowRecInfo() const;
};
#endif //CHAPTER04_RECTANGLE_H
