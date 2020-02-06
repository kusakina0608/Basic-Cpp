//
// Created by Kina on 2020/02/06.
//

#ifndef CHAPTER13_POINTTEMPLATE_H
#define CHAPTER13_POINTTEMPLATE_H

template <class T>
class Point{
private:
    T xpos, ypos;
public:
    Point(T x=0, T y=0);
    void ShowPosition() const;
};

#endif //CHAPTER13_POINTTEMPLATE_H
