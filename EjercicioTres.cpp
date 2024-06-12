#include <iostream>

/*
    Confeccione una función que reciba un número entero n y devuelva el factorial de dicho
    número.
*/

using namespace std;

unsigned long factorial(unsigned int n)
{
    long productoria = 1;
    for (int i = 1; i <= n; i++)
    {
        productoria *= i;
    }
    return productoria;

}

int main()
{
    int numero;

    cout << "Ingrese el numero al que desea realizarle el factorial: " << endl;
    cin >> numero;

    cout << "El factorial !" << numero << " es: " << factorial(numero) << endl;
    return 0;
}
