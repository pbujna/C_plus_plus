#include <iostream>

class complex
{
private:
    int real;
    int imaginary;

public:
    complex()
    {
        real = 0;
        imaginary = 0;
    }
    complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    complex operator+(const complex &c)
    {
        complex comp;
        comp.real = real + c.real;
        comp.imaginary = imaginary + c.imaginary;
        return comp;
    }
    complex operator-(const complex &c)
    {
        complex comp;
        comp.real = real - c.real;
        comp.imaginary = imaginary - c.imaginary;
        return comp;
    }
    friend std::ostream &operator<<(std::ostream &os, const complex &c);
    friend std::istream &operator>>(std::istream &in, complex &c);
};

std::ostream &operator<<(std::ostream &os, const complex &c)
{
    if (c.imaginary < 0)
    {
        os << c.real << " - i" << abs(c.imaginary) << std::endl;
        return os;
    }
    else
    {
        os << c.real << " + i" << c.imaginary << std::endl;
        return os;
    }
}

std::istream &operator>>(std::istream &in, complex &c)
{
    std::cout << "Enter real part -> ";
    in >> c.real;
    std::cout << "Enter imaginary part ->";
    in >> c.imaginary;
    return in;
}