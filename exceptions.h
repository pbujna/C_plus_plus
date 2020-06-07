#include <iostream>

double *fun_1(int n)
{
    try
    {
        double arr[n];
        double *p = &arr[0];
        return p;
    }
    catch (std::exception &e)
    {
        std::cerr << "Something went wrong: " << e.what() << std::endl;
        return NULL;
    }
}
