#include <iostream>
#include <stdlib.h>
using namespace std;

int *nums;
void llenarArray(int tam);
int obtenerMayor(int *, int);

int main(int argc, char const *argv[])
{
    int tam;
    cout << "Ingrese el tamanio del array: " << endl;
    cin >> tam;
    nums = new int[tam];

    llenarArray(tam);
    cout << "El mayor es: " << obtenerMayor(&nums[0], tam) << endl;

    return 0;
}

void llenarArray(int tam)
{
    cout << "Ingrese " << tam << " valores enteros." << endl;
    for (int i = 0; i < tam; i++)
    {
        cin >> nums[i];
    }
}
int obtenerMayor(int *dir_a, int tam)
{
    int mayor;

    for (int i = 0; i < tam; i++)
    {
        if (i == 0)
            mayor = *dir_a;

        if (*dir_a > mayor)
            mayor = *dir_a;

        dir_a++;
    }

    return mayor;
}
