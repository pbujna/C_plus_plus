#include <iostream>

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

void hello_world() {
    char input[20];
    std::cin >> input;
    std::cout << "Hello " << input << "!" << std::endl;
}

int main() {
    // hello_world();
    std::cout << factorial_loop(5) << std::endl;
    return 0;
} 