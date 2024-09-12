#include <iostream>
#include <cmath>

int main() {
    int hoehe = 3000;
    float fallzeit;
    
    std::cout << "Fallschirmabsprung" << std::endl;
    std::cout << "Sprunghöhe: " << hoehe << " Meter." << std::endl;

    fallzeit = std::sqrt(2 * (hoehe - 650) / 9.81);
    
    std::cout << "Der freie Fall dauert " << fallzeit << " Sekunden." << std::endl;

    return 0;
}
