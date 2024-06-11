#include <iostream>

using namespace std;

/*
    Modifique el programa anterior para convertir el subprograma en un procedimiento (return
    void). El valor absoluto debe aplicarse directamente sobre el parámetro actual (pasaje por
    referencia).
*/

void calcularModulo(float numero, float &modulo){


    if(numero < 0){
        modulo = numero * (-1);
    } else modulo = numero;

}

int main()
{
    float numero, modulo;

    cout << "Ingrese un numero para calcular su modulo: " << endl;
    cin >> numero;

    calcularModulo(numero, modulo);

    cout << "El modulo del numero es: " << modulo << endl;
    return 0;
}
