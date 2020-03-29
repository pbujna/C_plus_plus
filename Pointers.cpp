#include <iostream>
using namespace std;

// Int takes 4 bytes of memory

// Declare an array and show memory location of given values using pointers
void show_basics() {
    int array[10];
    int *arrayLocation0 = &array[0];
    int *arrayLocation6 = &array[6];
    cout << "Location 0 = " << arrayLocation0 << endl;
    cout << "Location 6 = " << arrayLocation6 << endl;
}

// Declare and initialize an array and iterate over it showing memory locations and given values
void iteration() {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 10; i++) {
        cout << array + i << " = " << *(array + i) << endl;
    }
}

// Helper method for swaping variables
void swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void bubbleSort(int array[], int n) {
    for (int a = 0; a < n - 1; a++) {
        for (int b = 0; b < n - a - 1; b++) {
            if(array[b] > array[b + 1]) {
                swap(&array[b], &array[b + 1]);
            }
        }
    }
}

int main() {
    int array[] = {6, 33, 5, 1};
    int n = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, n);
    for (int i = 0; i < n; i++) {
        cout << array[i] << endl;
    }
    return 0;
}

