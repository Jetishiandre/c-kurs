#include <iostream>

int main() {
    int a = 5, b = 10;

    if (a > b) {
        std::cout << "a ist größer als b" << std::endl;
    } else {
        std::cout << "a ist kleiner oder gleich b" << std::endl;
    }

    // Verkürzte Form mit ternärem Operator
    int max = (a > b) ? a : b;
    std::cout << "Der größere Wert ist: " << max << std::endl;

    return 0;
}
