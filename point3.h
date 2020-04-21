#include <iostream>

class point3
{
private:
    int a;
    int b;
    int c;
    friend class point2;

public:
    point3()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    point3(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void showValues()
    {
        std::cout << "x -> " + std::to_string(a) + ", y -> " + std::to_string(b) + ", z -> " + std::to_string(c) << std::endl;
    }
    void inputValues()
    {
        std::cout << "Enter x value -> ";
        std::cin >> a;
        std::cout << "Enter y value -> ";
        std::cin >> b;
        std::cout << "Enter z value -> ";
        std::cin >> c;
    }
};