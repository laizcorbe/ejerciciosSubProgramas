#include <iostream>

using namespace std;

/*
    Elabore un procedimiento que reciba tres parámetros, n1, n2 y mayor. A través del
    parámetro “mayor” devuelva el mayor número entre n1 y n2.

*/

void calcularMayor(int n1, int n2, int &mayor)
{
    if(n1>n2)mayor = n1;
    else mayor = n2;
}

int main()
{
    int n1, n2, mayor;

    cout << "Ingrese 2 valores enteros: " << endl;
    cin >> n1 >> n2;
    calcularMayor(n1, n2, mayor);
    cout << "El numero mayor entre los dos es: " << mayor << endl;

    return 0;
}
