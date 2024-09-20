#include <iostream>
#include <cmath> // für mathematische Funktionen wie cos
using namespace std;

// Abstrakte Basisklasse AbstractShape
class AbstractShape {
protected:
    double _x;
    double _y;

public:
    // Virtueller Destruktor für korrektes Aufräumen bei Polymorphie
    virtual ~AbstractShape() {}

    // Rein virtuelle Methode für das Zeichnen
    virtual void Draw() const = 0;

    // Getter und Setter für X und Y (müssen überschrieben werden)
    virtual double getX() const = 0;
    virtual void setX(double x) = 0;

    virtual double getY() const = 0;
    virtual void setY(double y) = 0;
};

// Konkrete Klasse Rectangle, die AbstractShape erbt und überschreibt
class Rectangle : public AbstractShape {
public:
    // Konstruktor zum Initialisieren von X und Y
    Rectangle(double x = 0.0, double y = 0.0) {
        _x = x;
        _y = y;
    }

    // Überschreiben der Draw-Methode
    void Draw() const override {
        cout << "Zeichne Rechteck bei (" << _x << ", " << _y << ")" << endl;
    }

    // Getter und Setter für X und Y überschreiben
    double getX() const override { return _x; }
    void setX(double x) override { _x = x; }

    double getY() const override { return _y; }
    void setY(double y) override { _y = y; }
};

// Hauptprogramm zur Demonstration
int main() {
    // Eine konkrete Instanz von Rectangle erstellen
    AbstractShape* shape = new Rectangle(10.0, 20.0);
    
    // Die Draw-Methode aufrufen
    shape->Draw();

    // Werte für X und Y setzen und erneut zeichnen
    shape->setX(30.0);
    shape->setY(40.0);
    shape->Draw();

    // Speicher freigeben
    delete shape;

    return 0;
}
