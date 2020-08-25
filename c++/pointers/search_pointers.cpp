#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void pedir_datos();
void mostrar_datos();
bool buscar(int);

int tamanio, elemento, *nums, pos;

int main(int argc, char const *argv[])
{
    pedir_datos();
    mostrar_datos();

    cout << "Ingrese su busqueda: " << endl;
    cin >> elemento;

    if (buscar(elemento))
        cout << "El numero " << elemento << " fue encontrado en la posision [" << pos
             << "] del array. Con direccion en memoria: " << nums + pos << endl;

    delete[] nums;

    return 0;
}

void pedir_datos()
{

    cout << "Ingrese el numero de elementos del vector: " << endl;
    cin >> tamanio;
    nums = new int[tamanio];
    cout << "Ingrese lo numeros enteros a continuacion: " << endl;

    for (int i = 0; i < tamanio; i++)
    {
        cin >> nums[i];
    }
}

void mostrar_datos()
{
    cout << "[";

    for (int i = 0; i < tamanio; i++)
        cout << *(nums + i) << ", ";

    cout << "]" << endl;
}

bool buscar(int key)
{
    bool encontrado = false;
    for (int i = 0; i < tamanio; i++)
    {
        if (*(nums + i) == key)
        {
            encontrado = true;
            pos = i;
            break;
        }
        cout << *(nums + i) << " ";
    }
    cout << endl;
    return encontrado;
}