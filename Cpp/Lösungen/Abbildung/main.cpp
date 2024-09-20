#include <iostream>
#include <cmath>


class Abbildung {
protected:
    double seiteA;
    double seiteB;
    double winkelA;

public:
    
    Abbildung(double seiteA, double seiteB, double winkelA)
        : seiteA(seiteA), seiteB(seiteB), winkelA(winkelA) {}

    
    virtual double flaecheBerechnen() const = 0;

  
    void flaecheAusgeben() const {
        std::cout << "Fläche: " << flaecheBerechnen() << std::endl;
    }
};


class Viereck : public Abbildung {
public:
    // Konstruktor
    Viereck(double seiteA, double seiteB, double winkelA)
        : Abbildung(seiteA, seiteB, winkelA) {}

    
    virtual double flaecheBerechnen() const override {
        return 0.0;  
    }
};


class Rechteck : public Viereck {
public:
    
    Rechteck(double seiteA, double seiteB)
        : Viereck(seiteA, seiteB, 90.0) {} 

   
    double flaecheBerechnen() const override {
        return seiteA * seiteB;
    }
};


class Parallelogramm : public Viereck {
public:
    
    Parallelogramm(double seiteA, double seiteB, double winkelA)
        : Viereck(seiteA, seiteB, winkelA) {}

    
    double flaecheBerechnen() const override {
        return seiteA * seiteB * sin(winkelA * M_PI / 180.0);
    }
};


class Dreieck : public Abbildung {
private:
    double seiteC;

public:
    
    Dreieck(double seiteA, double seiteB, double winkelA)
        : Abbildung(seiteA, seiteB, winkelA) {
       
        seiteC = sqrt(seiteA * seiteA + seiteB * seiteB - 2 * seiteA * seiteB * cos(winkelA * M_PI / 180.0));
    }

    
    double flaecheBerechnen() const override {
        return 0.5 * seiteA * seiteB * sin(winkelA * M_PI / 180.0);
    }
};


int main() {
    
    Abbildung* rechteck=new Rechteck(5.0, 3.0);
    Abbildung* parallelogramm=new Parallelogramm(4.0, 3.0, 60.0);
    Abbildung* dreieck=new Dreieck(3.0, 4.0, 90.0);

   
    std::cout << "Rechteck: ";
    rechteck->flaecheAusgeben();

    std::cout << "Parallelogramm: ";
    parallelogramm->flaecheAusgeben();

    std::cout << "Dreieck: ";
    dreieck->flaecheAusgeben();

    delete rechteck;
    delete parallelogramm;
    delete dreieck;

    return 0;
}
