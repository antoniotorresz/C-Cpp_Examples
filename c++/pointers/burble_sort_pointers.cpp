#include <iostream>
#include <stdlib.h>

using namespace std;

void mostrarArray(int *, int);
void llenarArray();
void ordenaBurbuja(int *, int);

int *nums, tam;
int main(int argc, char const *argv[])
{
    llenarArray();

    mostrarArray(&nums[0], tam);

    ordenaBurbuja(&nums[0], tam);

    mostrarArray(&nums[0], tam);

    delete[] nums;

    return 0;
}

void llenarArray()
{
    cout << "Ingrese el tamanio del array: " << endl;
    cin >> tam;

    cout << "Ingrese " << tam << " valores enteros." << endl;
    nums = new int[tam];

    for (int i = 0; i < tam; i++)
    {
        cin >> nums[i];
    }
}

void mostrarArray(int *a, int tam)
{
    cout << "____________________" << endl
         << "[";
    for (int i = 0; i < tam; i++)
    {
        cout << *a << ", ";
        a++;
    }
    cout << "]" << endl;
}

void ordenaBurbuja(int *nums, int tam)
{
    int aux;
    for (int i = 1; i < tam; i++)
    {
        for (int j = 0; j < (tam - i); j++)
        {
            if (*(nums + j) > *(nums + (j + 1)))
            {
                aux = *(nums + j);
                *(nums + j) = *(nums + (j + 1));
                *(nums + (j + 1)) = aux;
            }
        }
    }
}