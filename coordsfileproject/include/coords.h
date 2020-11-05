
#ifndef COORDS_H
#define COORDS_H

#include <string>

namespace coords{

class rect_coords;
class polar_coords;
class polar_coords{
public:
    double r;
    double theta;
    polar_coords();
    polar_coords(bool z, double a, double b);
    rect_coords toRectangular();
    void print(std::string a);
private:
};

class rect_coords{
public:
    double x;
    double y;
    rect_coords();
    rect_coords(double a, double b);
    polar_coords toPolar();
    void print(std::string a);
private:
};
};

#endif // COORDS_H_INCLUDED
