#include <iostream>
#include <string>
using namespace std;

class Konto {
private:
    string mKontoNummer;
    double mKontoStand;

public:
    Konto(string nummer, double betrag = 0) : mKontoNummer(nummer), mKontoStand(betrag) {}

    void auszug() const {
        cout << "Konto: " << mKontoNummer << endl;
        cout << "Kontostand: Fr. " << mKontoStand << endl;
    }
};

int main() {
    // Objekte auf dem Stack erstellen
    string kontoNameA = "60-1234-A";
    string kontoNameB = "60-1234-B";

    // Konto ohne Anfangsbetrag (Kontostand = 0)
    Konto kontoA(kontoNameA);  // Erstellt auf dem Stack

    // Konto mit Anfangsbetrag von 200
    Konto kontoB(kontoNameB, 200);  // Erstellt auf dem Stack

    // Auszüge anzeigen
    kontoA.auszug();
    kontoB.auszug();

    return 0;
}
