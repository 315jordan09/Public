#include "coords.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

void coords::print(string d){

}

//polar_coords

polar_coords::polar_coords(){
    r = 0;
    theta = M_PI/6;
}
polar_coords::polar_coords(bool z, double a, double b){
    if(z==true){
        theta = M_PI/6;
        r = a;
    }
    else if(b>M_PI/2){
        std::cout << "Error: only angles between 0 and pi/2 are supported." << std::endl;
    }
    else if(a<0){
        std::cout << "Error: only a radius >= 0 supported." << std::endl;
    }
    else{
        r = a;
        theta = b;
    }
}
polar_coords::toRectangular(){
    rect_coords r(0, 0);
    r.x = r*cos(theta);
    r.y = r*sin(theta);
    return r;
}
polar_coords::
polar_coords::
polar_coords::
polar_coords::
polar_coords::

//rect_coords

rect_coords::rect_coords(){
    x = 0;
    y = 0;
}
rect_coords::rect_coords(int a, int b){
    if(a<0||b<0){
        cout << "Error: Both coordinates need to be >= 0."
    }
    else{
        x = a;
        y = b;
    }
}
polar_coords& rect_coords::toPolar(){
    p.r =
    p.theta =
}
rect_coords::
rect_coords::
rect_coords::
rect_coords::
rect_coords::
