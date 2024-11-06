#include "triangle_cosines.h.cpp"

bool isValidTriangle(double a, double b, double c) 
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double cosineOfAngle(double a, double b, double c) 
{
    return (b * b + c * c - a * a) / (2 * b * c);
}

