#include <string>
class Fraccion{
private:
    int num;
    int den;

    int gcd(int a, int b) const;

public:
    Fraccion();
    Fraccion(int numV, int denV);

    void setNum(int numval);
    void setDen(int denval);

    int getNum();
    int getDen();

    double simpleF();
    Fraccion sumaFracciones(Fraccion otro);
    Fraccion multiFracciones(Fraccion otro);
    void imprimeFraccion(Fraccion);

    std::string to_string();
    void simplificar();

};
