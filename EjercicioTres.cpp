#include <iostream>

/*
    Confeccione una función que reciba un número entero n y devuelva el factorial de dicho
    número.
*/

using namespace std;

int calcularFactorial(int n){
    int factorial = n;
    if(n == 0 || n == 1){
        return 1;
    }

    for(int i = 0; i<n ; i++){
        factorial *= (n-1);
        n--;
    }

    return factorial;

}

int main()
{

    int numero, factorial;

    cout << "Ingrese el numero al que desea realizarle el factorial: " << endl;
    cin >> numero;

    factorial = calcularFactorial(numero);

    cout << "El factorial !" << numero << " es: " << factorial << endl;
    return 0;
}
