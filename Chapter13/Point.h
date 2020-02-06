//
// Created by Kina on 2020/02/06.
//

#ifndef CHAPTER13_POINT_H
#define CHAPTER13_POINT_H

#include <iostream>
using namespace std;

class Point {
private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0);
    friend ostream& operator<<(ostream& os, const Point& pos);
};

#endif //CHAPTER13_POINT_H
