#include <iostream>
#include "fraccion2.cpp"
using namespace std;

int main(){

    Fraccion f1;
    cout << "FRACCIÓN DEFAULT" << endl;
    cout << f1.to_string() << endl;

    cout << endl;
    cout << "ESCRIBE 5 FRACCIONES" << endl;
    cout << endl;

    int fraccionNum;
    int fraccionDen;

    Fraccion misFracciones[5];
    for (int i=0; i<5; i++){
        cout << "FRACCIÓN " << (i+1) << endl;
        cout << "NUMERADOR "<< (i+1) << endl;
       cin >> fraccionNum;
       while (fraccionNum<0){
        cout << "NO PUEDES PONER UN NUMERADOR NEGATIVO" << endl;
        cin >> fraccionNum;
       }
       misFracciones[i].setNum(fraccionNum);
       cout << "DENOMINADOR " << (i+1) << endl;
       cin >> fraccionDen;
       while (fraccionDen<=0){
        cout << "NO PUEDES PONER 0 COMO DENOMINADOR" << endl;
        cin >> fraccionDen;
       }



    misFracciones[i].setDen(fraccionDen);
    misFracciones[i].simplificar();
    }
    cout << "---FRACCIONES CREADAS---" << endl;
    for (int i=0; i<5; i++){
        cout << (i+1) << ": " << misFracciones[i].to_string() << endl;
    }
    cout << "SUMA DE LAS FRACCIONES 1 Y 2" << endl;
    Fraccion f2 = (misFracciones[0].sumaFracciones(misFracciones[1]));
    cout << f2.to_string() << endl;

    cout << "PRODUCTO DE LAS FRACCIONES 3 Y 4" << endl;
    Fraccion f4 = misFracciones[2].multiFracciones(misFracciones[3]);
    cout << f4.to_string() << endl;

    return 0;
}