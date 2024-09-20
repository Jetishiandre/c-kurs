#include <iostream>  // Für die Ein- und Ausgabe
using namespace std;

int main() {
    int zahl = 0;

    do {
        // Benutzereingabe
        cout << "Geben Sie eine Zahl zwischen 1 und 10 ein: ";
        cin >> zahl;
    } while (zahl < 1 || zahl > 10);  // Bedingung bleibt wie in C#

    // Ausgabe des Ergebnisses
    cout << "Sie haben die Zahl " << zahl << " eingegeben." << endl;

    return 0;
}
