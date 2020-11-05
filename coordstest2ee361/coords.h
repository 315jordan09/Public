#ifndef COORDS_H_INCLUDED
#define COORDS_H_INCLUDED

#include <string>


class coords{
public:
    void print(std::string d);
private:
};

class polar_coords : public coords{
public:
    double r;
    double theta;
    rect_coords r;
    polar_coords();
    polar_coords(bool z, double a, double b);
    rect_coords toRectangular();
private:
};

class rect_coords : public coords{
public:
    double x;
    double y;
    polar_coords p;
    rect_coords();
    rect_coords(bool z, int a, int b);
    polar_coords toPolar();
private:
};

#endif // COORDS_H_INCLUDED
