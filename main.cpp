#include "point2.h"

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
    // Lab_5.cpp
    point2 p2;
    point3 p3;
    p2.showValues();
    p3.inputValues();
    p2.project(p3);
    p2.showValues();
}