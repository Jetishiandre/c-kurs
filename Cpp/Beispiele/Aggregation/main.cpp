#include <iostream>
#include <string>

class Student {
private:
    std::string _Name;
    std::string _Vorname;

public:
    // Konstruktor für die Initialisierung
    Student(const std::string& name, const std::string& vorname)
        : _Name(name), _Vorname(vorname) {}

    // Getter für Name und Vorname (optional, je nach Bedarf)
    std::string getName() const { return _Name; }
    std::string getVorname() const { return _Vorname; }
};

class Vorlesung {
private:
    Student _Student;  // Aggregation: Vorlesung enthält Student

public:
    // Konstruktor, der ein Student-Objekt übergibt
    Vorlesung(const Student& student) : _Student(student) {}

    // Optional: Methode zur Anzeige des Studenten (Beispiel)
    void zeigeStudent() const {
        std::cout << "Student: " << _Student.getName() << " " << _Student.getVorname() << std::endl;
    }
};
