#include <iostream>
#include <string>

using namespace std;

// Basis-Klasse Konto
class Konto {
protected:
    string mKontoNummer;
    double mKontoStand;

public:
    // Konstruktor
    Konto(string kontoNummer) : mKontoNummer(kontoNummer), mKontoStand(0) {
        cout << "Konto " << mKontoNummer << " erstellt." << endl;
    }

    // Methode zum Anzeigen des Kontoauszugs
    virtual void auszug() {
        cout << "Konto: " << mKontoNummer << endl;
        cout << "Kontostand: " << mKontoStand << " Fr." << endl;
    }

    // Methode zum Einzahlen auf das Konto
    void einzahlen(double betrag) {
        mKontoStand += betrag;
    }

    // Getter für den Kontostand
    double gibKontoStand() const {
        return mKontoStand;
    }
};

// Abgeleitete Klasse Sparkonto
class Sparkonto : public Konto {
private:
    double zinsSatz;

public:
    // Konstruktor
    Sparkonto(string kontoNummer, double zinsSatz) 
        : Konto(kontoNummer), zinsSatz(zinsSatz) {
        cout << "Sparkonto " << mKontoNummer << " mit Zinssatz " << zinsSatz << "% erstellt." << endl;
    }

    // Methode zum Anzeigen des Kontoauszugs inkl. Zinssatz
    void auszug() override {
        Konto::auszug();
        cout << "Zinssatz: " << zinsSatz << " %" << endl;
        cout << "Provisorischer Zins: " << (zinsSatz * gibKontoStand() / 100) << " Fr." << endl;
    }

    // Methode zum Saldieren (Zinsen zum Kontostand addieren)
    void saldieren() {
        double zinsen = zinsSatz * gibKontoStand() / 100;
        einzahlen(zinsen);
        cout << "Zinsen von " << zinsen << " Fr. gutgeschrieben." << endl;
    }
};

// Test der Sparkonto-Klasse
int main() {
    // Sparkonto erstellen
    Sparkonto meinSparkonto("12345-6789", 2.5);

    // Einzahlung
    meinSparkonto.einzahlen(1000);
    
    // Kontoauszug anzeigen
    meinSparkonto.auszug();

    // Saldieren (Zinsen gutschreiben)
    meinSparkonto.saldieren();

    // Kontoauszug erneut anzeigen
    meinSparkonto.auszug();

    return 0;
}
