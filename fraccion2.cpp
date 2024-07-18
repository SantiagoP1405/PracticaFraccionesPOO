#include "fraccion2.h"
#include <math.h>
#include <stdexcept>
#include <iostream>

void Fraccion::setNum(int numval){
    num = numval;
}

void Fraccion::setDen(int denval){
    den = denval;
}

int Fraccion::getNum(){
    return num;
}

int Fraccion::getDen(){
    return den;
}

Fraccion::Fraccion(){
    num = 0;
    den = 1;
}

Fraccion::Fraccion(int numV, int denV){
    num = numV;
    den = denV;
}

double Fraccion::simpleF(){

}

std::string Fraccion::to_string(){
    return std::to_string(num) + "/" + std::to_string(den);
}

Fraccion Fraccion::sumaFracciones(Fraccion otro){
    Fraccion result(((num*otro.den)+(den*otro.num)),(den*otro.den));
    result.simplificar();
    return result;
}

Fraccion Fraccion::multiFracciones(Fraccion otro){
    Fraccion resultado((num*otro.num),(den*otro.den));
    resultado.simplificar();
    return resultado;
}

void Fraccion::imprimeFraccion(Fraccion){
    std::cout << std::to_string(num) + "/" + std::to_string(den) << std::endl;
    std::cout << double(num) / double(den) << std::endl;
}

int Fraccion::gcd(int a, int b) const {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void Fraccion::simplificar() {
    int divisor = gcd(abs(num), abs(den));
    num /= divisor;
    den /= divisor;
    if (den < 0) {
        num = -num;
        den = -den;
    }
}