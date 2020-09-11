/*
Escribir una funcion que tome de entrada un arreglo de enteros, y su tamaño, y que invierta el orden
de los n umeros contenidos en el arreglo, escribiendo el resultado en el mismo arreglo, y sin usar arreglo
auxiliar. Por ejemplo, al pasar de entrada el arreglo
1 5 2 9 8
este mismo arreglo contendra al salir de la funcion
8 9 2 5 1
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void invert(int *, int);
void show();
int *arr, tam;
int main(int argc, char const *argv[])
{
    tam = 5;
    arr = new int[tam];

    for (int i = 0; i < tam; i++)
        arr[i] = i;

    show();
    invert(&arr[0], tam);
    show();

    delete[] arr;

    return 0;
}

void invert(int *a, int tam)
{
    int aux;
    for (int i = 1; i < tam; i++)
    {
        for (int j = 0; j < tam - i; j++)
        {
            aux = *(arr + j);
            *(arr + j) = *(arr + (j + 1));
            *(arr + (j + 1)) = aux;
        }
    }
}

void show()
{
    cout << "[ ";
    for (int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}