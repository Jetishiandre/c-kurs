#include <iostream>
#include <string>

class Raum {
private:
    std::string _Name;  // Name des Raums

public:
    // Konstruktor für Raum
    Raum(const std::string& name = "") : _Name(name) {}

    // Getter für den Namen
    std::string getName() const { return _Name; }

    // Setter für den Namen (optional)
    void setName(const std::string& name) { _Name = name; }
};

class Gebaeude {
private:
    Raum* _Raum;  // Pointer auf ein dynamisch erstelltes Raum-Objekt

public:
    // Konstruktor, der den Raum dynamisch mit 'new' erstellt
    Gebaeude() {
        _Raum = new Raum("Standardraum");  // Dynamische Erstellung des Raums
    }

    // Destruktor, um den dynamisch zugewiesenen Speicher freizugeben
    ~Gebaeude() {
        delete _Raum;  // Speicher freigeben
    }

    // Methode, um den Raum anzuzeigen
    void zeigeRaum() const {
        if (_Raum != nullptr) {
            std::cout << "Raum Name: " << _Raum->getName() << std::endl;
        }
    }
};

int main() {
    Gebaeude meinGebaeude;
    meinGebaeude.zeigeRaum();

    return 0;
}
