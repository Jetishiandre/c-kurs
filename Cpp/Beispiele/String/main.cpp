#include <iostream>
#include <string>

class Fakultaet {
private:
    std::string name;

public:
    Fakultaet(std::string n) : name(n) {}

    std::string getName() {
        return name;
    }
};

int main() {
    Fakultaet f("Informatik");
    std::cout << "Fakultaet: " << f.getName() << std::endl;
    return 0;
}
