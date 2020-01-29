//
// Created by Kina on 2020/01/29.
//

#ifndef CHAPTER04_POINT_H
#define CHAPTER04_POINT_H


class Point {
private:
    int x;
    int y;
public:
    Point(const int &xpos, const int &ypos);
    int GetX() const;
    int GetY() const;
    bool SetX(int xpos);
    bool SetY(int ypos);
};
#endif //CHAPTER04_POINT_H
