#pragma once

#include "Point2D.h"
#include "CustomException.h"


template<class T>
class Rectangle : public Point2D<T> {
protected:
    T width, height;
public:
    Rectangle();

    Rectangle(const T x1, const T y1, const T width, const T height);

    T getWidth() const;

    T getHeight() const;

    void setWidth(T newWidth);

    void setHeight(T newHeight);

    float area() const;

    float circumference() const;
};



template<class T>
Rectangle<T>::Rectangle() {
    width = 1;
    height = 2;

}

template<class T>
Rectangle<T>::Rectangle(const T x, const T y, const T wid, const T hgt) {
    if(wid <=0 || hgt <0){
        throw CustomException(33);
    }
    else {
        width = wid;
        height = hgt;
    }
    Point2D<T>::setX( x);
    Point2D<T>::setY(y);
}

template<class T>
T Rectangle<T>::getWidth() const {
    return width;
}

template<class T>
T Rectangle<T>::getHeight() const {
    return height;
}

template<class T>
void Rectangle<T>::setWidth(T newWidth) {
    if (newWidth <= 0) {
        throw CustomException(33);
    }
    else {
    width = newWidth;
    }
}

template<class T>
void Rectangle<T>::setHeight(T newHeight) {
    if (newHeight <= 0) {
        throw CustomException(33);
    }
    else {
        height = newHeight;
    }
}

template<class T>
float Rectangle<T>::area() const {
    float area = width * height;//A=b*h
    return area;
}

template<class T>
float Rectangle<T>::circumference() const {
    float circumference = 2 * (height+ width);//C=2*(h+W)
    return circumference;
}
