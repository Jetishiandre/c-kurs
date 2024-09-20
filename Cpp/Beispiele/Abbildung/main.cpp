#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Abbildung {
private:
    float _seiteA, _seiteB, _winkelA;
    string _name;

    static int anzahlAbbildungen;

public:
    // Konstruktor
    Abbildung(string name, float seitea, float seiteb, float winkela) 
        : _seiteA(seitea), _seiteB(seiteb), _winkelA(winkela), _name(name) {
        anzahlAbbildungen++;
    }

    // Methode zur Rückgabe der Anzahl der Objekte
    static int anzahlObjekte() {
        return anzahlAbbildungen;
    }

    // Flächenberechnung
    double flaecheBerechnen() {
        if (_name == "R") { // Rechteck
            return _seiteA * _seiteB;
        } else if (_name == "P") { // Parallelogramm
            return _seiteA * _seiteB * sin(_winkelA / 180 * M_PI);
        } else if (_name == "D") { // Dreieck
            return (_seiteA * _seiteB * sin(_winkelA / 180 * M_PI)) / 2;
        } else {
            return 0;
        }
    }

    // Umfangberechnung
    double umfangBerechnen() {
        if (_name == "R" || _name == "P") { // Rechteck oder Parallelogramm
            return 2 * (_seiteA + _seiteB);
        } else if (_name == "D") { // Dreieck
            // Cosinussatz
            double seiteC = sqrt(_seiteA * _seiteA + _seiteB * _seiteB 
                                 - 2 * _seiteA * _seiteB * cos(_winkelA / 180 * M_PI));
            return _seiteA + _seiteB + seiteC;
        } else {
            return 0;
        }
    }
};

// Definition der statischen Variable
int Abbildung::anzahlAbbildungen = 0;

int main() {
    // Beispiel-Objekte
    Abbildung rechteck("R", 5.0, 10.0, 90.0);
    Abbildung dreieck("D", 5.0, 10.0, 60.0);

    cout << "Fläche des Rechtecks: " << rechteck.flaecheBerechnen() << endl;
    cout << "Umfang des Rechtecks: " << rechteck.umfangBerechnen() << endl;

    cout << "Fläche des Dreiecks: " << dreieck.flaecheBerechnen() << endl;
    cout << "Umfang des Dreiecks: " << dreieck.umfangBerechnen() << endl;

    cout << "Anzahl der Abbildungen: " << Abbildung::anzahlObjekte() << endl;

    return 0;
}
