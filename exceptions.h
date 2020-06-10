#include <vector>
#include <iostream>

double *fun_1(int n)
{
    try
    {
        double arr[n];
        return &arr[0];
    }
    catch (std::exception &e)
    {
        std::cerr << "Something went wrong: " << e.what() << std::endl;
        return NULL;
    }
}

void replace(std::vector<int> a, std::vector<int> b, std::vector<int> c, int a1, int b1, int c1)
{
    if (a.size() - 1 >= a1 && b.size() - 1 >= b1 && c.size() - 1 >= c1)
    {
        int tmp1 = a[a1];
        int tmp2 = b[b1];
        int tmp3 = c[c1];
        a[a1] = tmp3;
        b[b1] = tmp1;
        c[c1] = tmp2;
        for (int n : a)
        {
            std::cout << n << std::endl;
        }
    }
    else
    {
        throw std::out_of_range("Index is higher than size of vector!");
    }
}
