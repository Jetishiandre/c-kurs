#include <iostream>
#include <cstdlib>  // Für std::atof (konvertiert String zu double)

int main(int argc, char* argv[]) {
    // Überprüfen, ob genügend Argumente übergeben wurden
    if (argc != 4) {
        std::cout << "Verwendung: <Zahl1> <Operator> <Zahl2>" << std::endl;
        return 1;  // Fehlercode zurückgeben
    }

    // Konvertiere die Eingabeparameter in Gleitkommazahlen (double)
    double zahl1 = std::atof(argv[1]);
    char op = argv[2][0];  // Der Operator (+, -, *, /)
    double zahl2 = std::atof(argv[3]);

    // Ergebnisvariable
    double ergebnis = 0.0;

    // Berechne das Ergebnis basierend auf dem Operator
    switch (op) {
        case '+':
            ergebnis = zahl1 + zahl2;
            break;
        case '-':
            ergebnis = zahl1 - zahl2;
            break;
        case '*':
            ergebnis = zahl1 * zahl2;
            break;
        case '/':
            if (zahl2 != 0) {
                ergebnis = zahl1 / zahl2;
            } else {
                std::cout << "Fehler: Division durch Null nicht möglich!" << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Ungültiger Operator! Bitte +, -, *, oder / verwenden." << std::endl;
            return 1;
    }

    // Ausgabe des Ergebnisses
    std::cout << argv[1] << " " << op << " " << argv[3] << " = " << ergebnis << std::endl;

    return 0;
}
