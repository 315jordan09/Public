#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape{
    public:
        Rectangle();
        Rectangle(double c);
        Rectangle(double w, double h);
        virtual double getArea() const;
    private:
        double width;
        double height;
};

#endif // RECTANGLE_H
