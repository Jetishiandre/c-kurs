#include <iostream>  // Für die Ein- und Ausgabe
using namespace std;

int main() {
    int n;
    long result = 1;
    
    // Benutzereingabe
    cout << "Geben Sie eine Zahl ein: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        result *= i;
        i++;
    }

    // Ausgabe des Ergebnisses
    cout << n << "! = " << result << endl;

    return 0;
}
