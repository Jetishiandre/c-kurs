#include <iostream>
#include <string>
using namespace std;

class Konto {
private:
    string mKontoNummer;  // Kontonummer
    double mKontoStand;   // Kontostand

public:
    // Konstruktor zur Initialisierung der Kontonummer und des Kontostands
    Konto(string nummer, double betrag) : mKontoNummer(nummer), mKontoStand(betrag) {}

    // Konstruktor zur Initialisierung der Kontonummer, der Kontostand wird auf 0 gesetzt
    Konto(string nummer) : mKontoNummer(nummer), mKontoStand(0) {}

    // Methode einzahlen: erhöht den Kontostand um den übergebenen Betrag
    void einzahlen(double betrag) {
        mKontoStand += betrag;
    }

    // Methode abheben: reduziert den Kontostand um den übergebenen Betrag
    // Gibt true zurück, wenn die Abhebung gültig ist (Deckung vorhanden)
    bool abheben(double betrag) {
        if (mKontoStand - betrag >= 0) {
            mKontoStand -= betrag;
            return true;
        }
        return false;
    }

    // Methode auszug: zeigt die Kontonummer und den Kontostand an
    void auszug() const {
        cout << "Konto: " << mKontoNummer << endl;
        cout << "Kontostand: Fr. " << mKontoStand << endl;
    }

    // Methode toString: gibt die Kontonummer und den Kontostand als Zeichenkette zurück
    string toString() const {
        return "Konto " + mKontoNummer + " (Kontostand " + to_string(mKontoStand) + ")";
    }
};

int main() {
    // Dynamische Speicherzuweisung mit `new`
    string kontoNameA = "60-1234-A";
    string kontoNameB = "60-1234-B";

    // Konto ohne Anfangsbetrag (Kontostand = 0)
    Konto* kontoA = new Konto(kontoNameA);  // Erstellt auf dem Heap

    // Konto mit Anfangsbetrag von 200
    Konto* kontoB = new Konto(kontoNameB, 200);  // Erstellt auf dem Heap

    // Auszüge anzeigen
    kontoA->auszug();  // Zugriff auf das Konto über den Zeiger
    kontoB->auszug();

    // Speicher freigeben
    delete kontoA;  // Manuelles Freigeben des Speichers erforderlich
    delete kontoB;

    return 0;
}
