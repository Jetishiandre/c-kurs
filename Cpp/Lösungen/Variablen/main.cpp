#include <iostream>
#include <string>

int main() {
    int tag = 12, monat = 5, jahr = 2024, stunden = 14, minuten = 30;
    int bestellungen = 25;
    std::string artikelnummer = "42000-045";
    double kilogramm = 10.5, gramm = 500;
    double preis = 29.99;
    std::string artikelbezeichnung = "Schraube";
    const int mindestbestellungen = 10;
    bool abbruch = false;
    int artikelposition = 1;

    std::cout << "Datum: " << tag << "." << monat << "." << jahr << std::endl;
    std::cout << "Artikelnummer: " << artikelnummer << std::endl;
    std::cout << "Preis: " << preis << " Euro" << std::endl;

    return 0;
}
