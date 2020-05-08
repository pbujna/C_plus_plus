#include "point2.h"
#include "complex.cpp"

int main()
{
    // Pointers.cpp
    // int array[] = {6, 33, 5, 1, 22, 107};
    // int n = sizeof(array) / sizeof(array[0]);
    // bubbleSort(array, n);
    // for (int i = 0; i < n; i++)
    // {
    //     std::cout << array[i] << std::endl;
    // }
    // return 0;
    //
    // Lab_5
    // point2 p2;
    // point3 p3;
    // p2.showValues();
    // p3.inputValues();
    // p2.project(p3);
    // p2.showValues();
    // Lab_6
    complex a;
    complex b(1, 2);
    std::cin >> a;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;   
    std::cout << "a + b: " << a + b << std::endl;
    std::cout << "a - b: " << a - b << std::endl;
}