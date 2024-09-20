#include <iostream>
using namespace std;

// Abstrakte Klasse AbstractShape
class AbstractShape {
protected:
    double _x;
    double _y;

public:
    // Virtueller Destruktor, um korrektes Aufräumen zu gewährleisten
    virtual ~AbstractShape() {}

    // Rein virtuelle Funktion: Muss in den abgeleiteten Klassen implementiert werden
    virtual void Draw() const = 0;

    // Getter und Setter für X und Y
    virtual double getX() const { return _x; }
    virtual void setX(double x) { _x = x; }

    virtual double getY() const { return _y; }
    virtual void setY(double y) { _y = y; }
};


// Abgeleitete Klasse Rectangle, die AbstractShape implementiert
class Rectangle : public AbstractShape {
public:
    // Konstruktor zum Setzen der X- und Y-Koordinaten
    Rectangle(double x = 0.0, double y = 0.0) {
        _x = x;
        _y = y;
    }

    // Implementierung der Draw-Methode
    void Draw() const override {
        cout << "Zeichne Rechteck an Position (" << _x << ", " << _y << ")" << endl;
    }

    // Optional: Getter und Setter überschreiben
    double getX() const override { return _x; }
    void setX(double x) override { _x = x; }

    double getY() const override { return _y; }
    void setY(double y) override { _y = y; }
};

// Hauptprogramm zur Demonstration
int main() {
    // Man kann keine Instanz der abstrakten Klasse AbstractShape erstellen
    // AbstractShape shape; // Fehler: AbstractShape ist eine abstrakte Klasse

    // Instanz der konkreten Klasse Rectangle erstellen
    AbstractShape* shape = new Rectangle(10.0, 20.0);
    shape->Draw();  // Aufruf der abgeleiteten Draw-Methode

    shape->setX(30.0);
    shape->setY(40.0);
    shape->Draw();

    // Speicher freigeben
    delete shape;

    return 0;
}
