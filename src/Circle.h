#pragma once

#include "Point2D.h"
#include "CustomException.h"



template<class T>
class Circle : public Point2D <T>{
protected:
    T radius;
public:
    Circle();

    Circle(const T x, const T y, const T radius);

    T getRadius() const;

    void setRadius(T newRadius);

    float area() const;

    float circumference() const;
};

template<class T>
Circle<T>::Circle() {
    radius = 1;
}

template<class T>
Circle<T>::Circle(const T x, const T y, const T rad) {

    if(rad<=0){
        throw CustomException(22);
    }
    else {
        radius = rad;
    }
    Point2D<T>::setX( x);
    Point2D<T>::setY(y);
}

template<class T>
T Circle<T>::getRadius() const {
    return radius;
}

template<class T>
void Circle<T>::setRadius(T newRadius) {
    if(newRadius <= 0){
        throw CustomException(22);
    }
    else {
        radius = newRadius;
    }
}

template<class T>
float Circle<T>::area() const {
    float area = 3.14 * (radius*radius); //A=πr^2
    return area;
}

template<class T>
float Circle<T>::circumference() const {
    float circumference = 2 * 3.14 * radius;//C=2πr
    return circumference;
}

