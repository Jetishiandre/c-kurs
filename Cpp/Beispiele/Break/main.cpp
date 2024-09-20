#include <iostream>
#include <cmath>  // Für sqrt()
using namespace std;

int main(int argc, char* argv[]) {
    // Überprüfen, ob ein Argument übergeben wurde
    if (argc < 2) {
        cout << "Bitte geben Sie eine Zahl als Argument an." << endl;
        return 1;  // Fehlercode zurückgeben
    }

    // Konvertiere das erste Kommandozeilenargument in eine Zahl
    long zahl = atol(argv[1]);  // atof für double oder atol für long

    long wurzel = (long)sqrt(zahl);  // Berechne die Wurzel
    long teiler;

    // Überprüfe, ob die Zahl eine Primzahl ist
    for (teiler = 2; teiler <= wurzel; teiler++) {
        if (zahl % teiler == 0) {
            break;  // Teiler gefunden, also ist es keine Primzahl
        }
    }

    // Ausgabe des Ergebnisses
    if (teiler <= wurzel) {
        cout << zahl << " ist keine Primzahl." << endl;
    } else {
        cout << zahl << " ist eine Primzahl." << endl;
    }

    return 0;
}
