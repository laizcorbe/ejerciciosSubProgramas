#include <iostream>

using namespace std;

/*
    Confeccione una función que , dado un valor por parámetro, devuelva el módulo de dicho
    valor a través de su invocación. Que devuelva un valor a través de su invocación quiere decir
    que tiene que tiene que devolver dicho valor a través del return.
*/

int calcularModulo(int numero){

    if(numero < 0){
        return numero* -1;
    }
    return numero;
}

int main()
{
    float numero, modulo;

    cout << "Ingrese un numero para calcular su modulo: " << endl;
    cin >> numero;

    modulo = calcularModulo(numero);

    cout << "El modulo del numero es: " << modulo << endl;
    return 0;
}
