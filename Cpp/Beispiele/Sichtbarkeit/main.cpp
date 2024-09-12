#include <iostream>

int main() {
    int i;
    {
        int j;
        j = 1;
        std::cout << "j = " << j << std::endl;
    }
    i = 2;
    std::cout << "i = " << i << std::endl;

    int k;
    k = 3;
    {
        int k1;
        k1 = 4;
        std::cout << "k1 = " << k1 << std::endl;
    }
    std::cout << "k = " << k << std::endl;

    return 0;
}
