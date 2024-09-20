#include <iostream>  // Für die Ein- und Ausgabe
using namespace std;

int main() {
    int n;
    long result = 1;

    // Benutzereingabe
    cout << "Geben Sie eine Zahl ein: ";
    cin >> n;

    // Berechnung der Fakultät
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    // Ausgabe des Ergebnisses
    cout << n << "! = " << result << endl;

    return 0;
}
