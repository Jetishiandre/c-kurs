#include <iostream>

int main() {
    int tag;
    std::cout << "Geben Sie die Nummer des Wochentags ein (1 = Montag, 7 = Sonntag): ";
    std::cin >> tag;

    switch (tag) {
        case 1: std::cout << "Montag" << std::endl; break;
        case 2: std::cout << "Dienstag" << std::endl; break;
        case 3: std::cout << "Mittwoch" << std::endl; break;
        case 4: std::cout << "Donnerstag" << std::endl; break;
        case 5: std::cout << "Freitag" << std::endl; break;
        case 6: std::cout << "Samstag" << std::endl; break;
        case 7: std::cout << "Sonntag" << std::endl; break;
        default: std::cout << "Ungültiger Wochentag" << std::endl; break;
    }

    return 0;
}
