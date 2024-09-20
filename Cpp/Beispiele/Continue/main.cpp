#include <iostream>  // Für Ein- und Ausgabe
using namespace std;

int main() {
    for (int a = -5; a <= 5; a++) {
        if (a == 0)
            continue;  // Überspringt die Division durch 0

        // Ausgabe des Bruchs und seines Ergebnisses
        cout << "1/" << a << " = " << 1.0 / a << endl;
    }

    return 0;
}
