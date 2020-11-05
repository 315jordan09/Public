#include "rectangle.h"

Rectangle::Rectangle(){
    height = 0;
    width = 0;
}
Rectangle::Rectangle(double c){
    height = c;
    width = c;
}
Rectangle::Rectangle(double w, double h){
    height = h;
    width = w;
}
double Rectangle::getArea() const{
    return height*width;
};
