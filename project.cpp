#include "point2.h"

point2 project(point3 &p3)
{
    int a = p3.a;
    int b = p3.b;
    point2 p2(a, b);
    return p2;
}
