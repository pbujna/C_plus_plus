#include <iostream>
using namespace std;

int factorial_recursive(int value) {
    if (value == 0) {
        return 1;
    }
    return value * factorial_recursive(value - 1);
}

int factorial_loop(int value) {
    int output = 1;
    for (int i = value; i > 0; i--) {
        output *= i;
    }
    return output;
}

void helloworld() {
    char input[20];
    cin >> input;
    cout << "Hello " << input << "!" << endl;
}

int main() {
    // helloworld();
    cout << factorial_loop(5) << endl;
    return 0;
} 