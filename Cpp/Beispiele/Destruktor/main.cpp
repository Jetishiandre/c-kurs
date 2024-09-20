#include <iostream>
#include <string>
using namespace std;

class Konto {
private:
    string mKontoNummer;
    double mKontoStand;

public:
    // Konstruktor
    Konto(string nummer, double betrag = 0) : mKontoNummer(nummer), mKontoStand(betrag) {
        cout << "Konto erstellt: " << mKontoNummer << endl;
    }

    // Destruktor
    ~Konto() {
        // Cleanup statements, falls nötig
        cout << "Konto gelöscht: " << mKontoNummer << endl;
    }

    // Weitere Methoden
    void auszug() const {
        cout << "Konto: " << mKontoNummer << endl;
        cout << "Kontostand: Fr. " << mKontoStand << endl;
    }
};

int main() {
    // Dynamisch ein Konto-Objekt erstellen
    Konto* kontoA = new Konto("60-1234-A", 500);

    // Kontoinformationen anzeigen
    kontoA->auszug();

    // Speicher freigeben (ruft automatisch den Destruktor auf)
    delete kontoA;

    return 0;
}
