#include <iostream>
using namespace std;

class Fakultaet {
private:
    long mLong;
    int mInt;

public:
    // Konstruktordeklaration
    Fakultaet(long aLong);

    // Methode, die eine Member-Variable zurückgibt
    long getLong() const;  // const bedeutet, dass die Methode das Objekt nicht verändert

    // Methode ohne Rückgabewert (void)
    void setLong(long value);

    // Methode, die das Verhalten des Objekts definiert
    void display() const;
};

// Konstruktordefinition
Fakultaet::Fakultaet(long aLong) : mLong(aLong), mInt(0) {}

// Definition der get-Methode
long Fakultaet::getLong() const {
    return mLong;
}

// Definition der set-Methode
void Fakultaet::setLong(long value) {
    mLong = value;
}

// Definition der display-Methode
void Fakultaet::display() const {
    std::cout << "mLong: " << mLong << ", mInt: " << mInt << std::endl;
}

int main() {
    Fakultaet fak(100);
    fak.display();  // Aufruf der Methode display()
    fak.setLong(200);
    fak.display();  // Zeigt die aktualisierten Werte
    return 0;
}
