#include <iostream>

using namespace std;

/*
        Dado un vector 15 valores, hacer un programa que pueda obtener, y sacar
        por pantalla:
            − el mayor de los valores
            − el menor de los valores
            − el más próximo al promedio
*/

int main()
{
    int v[5], maximo, minimo, vPromedio, total = 0, aux;
    float promedio = 0;



    for (int i = 0; i < 5; i ++)
    {
        cout << "Ingrese valores: " << endl;
        cin >> v[i];

    }
    for(int i = 0; i < 5; i++)
    {
        total += v[i];
    }

    promedio = total / 5;

    for(int i = 0; i < 5; i++)
    {
        if(v[i] >= maximo || i == 0)
        {
                maximo = v[i];
        }

        if(v[i] <= minimo || i == 0)
        {
                minimo = v[i];
        }


        if((v[i]-promedio) <= aux)
        {
            aux = (v[i]  -promedio);
            if(aux < 0){
                aux *= -1;
            }
            vPromedio = v[i];
        }

    }


    cout << "----------DATOS OBTENIDOS----------" << endl;
    cout << "- MAXIMO: " << maximo << endl;
    cout << "- MINIMO: " << minimo << endl;
    cout << "- PROMEDIO: " << promedio << endl;
    cout << "- NUM MAS CERCANO AL PROMEDIO: " <<  vPromedio << endl;


    return 0;
}
