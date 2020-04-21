#include <iostream>

// Int takes 4 bytes of memory

// Declare an array and show memory location of given values using pointers
void show_basics()
{
    int array[10];
    int *arrayLocation0 = &array[0];
    int *arrayLocation6 = &array[6];
    std::cout << "Location 0 = " << arrayLocation0 << std::endl;
    std::cout << "Location 6 = " << arrayLocation6 << std::endl;
}

// Declare and initialize an array and iterate over it showing memory locations and given values
void iteration()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 10; i++)
    {
        std::cout << array + i << " = " << *(array + i) << std::endl;
    }
}

// Helper method for swaping variables
void swap(int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void bubbleSort(int array[], int n)
{
    for (int a = 0; a < n - 1; a++)
    {
        for (int b = 0; b < n - a - 1; b++)
        {
            if (array[b] > array[b + 1])
            {
                swap(&array[b], &array[b + 1]);
            }
        }
    }
}
