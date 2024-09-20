#include <iostream>
using namespace std;

class Fakultaet {
private:
    long mLong;
    int mInt;

public:
    // Konstruktor ohne Parameter
    Fakultaet() : mLong(0), mInt(0) {
        cout << "Standardkonstruktor aufgerufen" << endl;
    }

    // Konstruktor mit einem Parameter
    Fakultaet(long aLong) : mLong(aLong), mInt(0) {
        cout << "Konstruktor mit einem Parameter aufgerufen" << endl;
    }

    void display() {
        cout << "mLong: " << mLong << ", mInt: " << mInt << endl;
    }
};

int main() {
    // Objekt mit Standardkonstruktor
    Fakultaet f1;
    f1.display();

    // Objekt mit Konstruktor, der einen Parameter akzeptiert
    Fakultaet f2(42);
    f2.display();

    return 0;
}
