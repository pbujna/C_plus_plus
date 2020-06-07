#include "point2.h"
#include "complex.cpp"
#include "inheritance.h"

int main()
{
    // Inheritance
    atraction a(10, "A", "B");
    a.showPrice();
    a.showName();
    a.showDesc();
    train b;
    b.initialize(10, 20, 30, "C", "D");
    b.showArrival();
    b.showDeparture();
    b.showPrice();
    b.showName();
    b.showDesc();
}