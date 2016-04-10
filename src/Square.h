#pragma once

#include "Point2D.h"
#include "Rectangle.h"


template<class T>
class Square : public Rectangle <T> {
public:
    Square(T x, T y, T side);

};

template<class T>
Square<T>::Square(T x, T y, T side) {
    Point2D<T>::setX(x);
    Point2D<T>::setY(y);
    if(side<=0){
        throw CustomException(33);
    }
    else {
        Rectangle<T>::setHeight(side);
        Rectangle<T>::setWidth(side);
    }
}
