#include <iostream>
using namespace std;

int main() {
    int array[10];
    int *arrayLocation0 = &array[0];
    int *arrayLocation6 = &array[6];
    cout << "Location 0 = " << arrayLocation6 << endl;
    return 0;
}

