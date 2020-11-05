#include "coords.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

using namespace coords;
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
        theta = M_PI/6;
        r = 0;
    }
    else if(a<0){
        std::cout << "Error: only a radius >= 0 supported." << std::endl;
    }
    else{
        r = a;
        theta = b;
    }
}
rect_coords polar_coords::toRectangular(){
    rect_coords w;
    w.x = r*cos(theta);
    w.y = r*sin(theta);
    return w;
}
void polar_coords::print(string a){
    cout << "Polar coordinates of " << a << ": (" << r << ", " << theta << " rad)" << endl;
}
//rect_coords
rect_coords::rect_coords(){
    x = 0;
    y = 0;
}
rect_coords::rect_coords(double a, double b){
    if(a<0||b<0){
        cout << "Error: Both coordinates need to be >= 0." << endl;
        x = 0;
        y = 0;
    }
    else{
        x = a;
        y = b;
    }
}
polar_coords rect_coords::toPolar(){
    polar_coords p;
    p.r = sqrt((x*x)+(y*y));
    p.theta = std::atan((y/x));
    if(y==0&&x==0){
        p.theta = M_PI/6;
    }
    return p;
}
void rect_coords::print(string a){
    cout << "Rectangular coordinates of " << a << ": (" << x << ", " << y << ")" << endl;
}
