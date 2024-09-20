#include <string>

class Person {
private:
    std::string Name;
    std::string Vorname;

public:
    // Konstruktor für die Initialisierung
    Person(const std::string& name, const std::string& vorname)
        : Name(name), Vorname(vorname) {}

    // Getter-Methoden für Name und Vorname
    std::string getName() const { return Name; }
    std::string getVorname() const { return Vorname; }
};

class PrivatKunde : public Person {
private:
    int Kundennummer;

public:
    // Konstruktor für die Initialisierung, inklusive Vererbung
    PrivatKunde(const std::string& name, const std::string& vorname, int kundennummer)
        : Person(name, vorname), Kundennummer(kundennummer) {}

    // Getter-Methode für die Kundennummer
    int getKundennummer() const { return Kundennummer; }
};
