#include <iostream>
#include "point3.h"

class point2
{
private:
    int a;
    int b;

public:
    point2()
    {
        a = 0;
        b = 0;
    }
    point2(int x, int y)
    {
        a = x;
        b = y;
    }
    void showValues()
    {
        std::cout << "x -> " + std::to_string(a) + ", y -> " + std::to_string(b) << std::endl;
    }
    void inputValues()
    {
        std::cout << "Enter x value -> ";
        std::cin >> a;
        std::cout << "Enter y value -> ";
        std::cin >> b;
    }
    void project(point3 &p3)
    {
        a = p3.a;
        b = p3.b;
    }
};