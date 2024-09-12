#include <iostream>

int main() {
    int i = 10;
    double d = 5.75;
    
    // Erweiternde Konvertierung
    double ergebnis = i + d;  // int wird in double konvertiert
    
    // Einschränkende Konvertierung
    int gerundet = (int)d;  // Cast von double nach int

    std::cout << "Ergebnis: " << ergebnis << std::endl;
    std::cout << "Gerundeter Wert: " << gerundet << std::endl;

    return 0;
}
