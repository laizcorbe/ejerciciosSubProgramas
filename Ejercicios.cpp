#include <iostream>

using namespace std;

/*
    Confeccione una funci�n que , dado un valor por par�metro, devuelva el m�dulo de dicho
    valor a trav�s de su invocaci�n. Que devuelva un valor a trav�s de su invocaci�n quiere decir
    que tiene que tiene que devolver dicho valor a trav�s del return.
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
