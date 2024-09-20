#include <iostream>
using namespace std;

// Abstrakte Basisklasse IShape (entspricht dem Interface)
class IShape {
public:
    // Virtuelle Destruktoren sind notwendig für korrekte Ressourcenfreigabe bei polymorphen Objekten
    virtual ~IShape() {}

    // Rein virtuelle Methoden (pure virtual) - Entsprechung der Interface-Methoden
    virtual void Draw() const = 0;
    virtual double getX() const = 0;
    virtual void setX(double x) = 0;
    virtual double getY() const = 0;
    virtual void setY(double y) = 0;
};

// Abgeleitete Klasse Square, die das Interface IShape implementiert
class Square : public IShape {
private:
    double _mX, _mY;

public:
    // Konstruktor
    Square(double x = 0.0, double y = 0.0) : _mX(x), _mY(y) {}

    // Implementierung der Draw-Methode
    void Draw() const override {
        cout << "Zeichne Quadrat an Position (" << _mX << ", " << _mY << ")" << endl;
    }

    // Getter und Setter für X-Koordinate
    double getX() const override { return _mX; }
    void setX(double x) override { _mX = x; }

    // Getter und Setter für Y-Koordinate
    double getY() const override { return _mY; }
    void setY(double y) override { _mY = y; }
};

// Weitere Schnittstelle IRotateable
class IRotateable {
public:
    virtual ~IRotateable() {}

    // Methode zur Rotation
    virtual void Rotate(double theta) = 0;
};

// Erweiterte Schnittstelle IDrawable, die von IRotateable erbt
class IDrawable : public IRotateable {
public:
    virtual void Draw() = 0;
};

// Hauptprogramm zur Demonstration
int main() {
    // Polymorphe Verwendung des Interfaces
    IShape* shape = new Square(10.0, 15.0); // Erstellung eines Square-Objekts über die Schnittstelle IShape
    shape->Draw(); // Aufruf der Draw-Methode über das Interface

    // Setzen der X- und Y-Werte
    shape->setX(20.0);
    shape->setY(25.0);
    shape->Draw();

    // Freigeben des Speicherplatzes (kein Garbage Collector in C++)
    delete shape;

    return 0;
}
