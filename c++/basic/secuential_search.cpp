#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[5] = {2, 3, 4, 1, 5};
    int n, pos;
    bool encontrado = false;

    cout << "Ingrese el numero que desea buscar" << endl;
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
        if (a[i] == n)
        {
            encontrado = true;
            pos = i;
            break;
        }
    }

    if (encontrado)
    {
        cout << "\nEl numero " << n << " se concontro dentro del arreglo en de la posision: a[" << pos << "]" << endl;
    }
    else
    {
        cout << "\nEl numero " << n << " no se encuentra dentro del arreglo." << endl;
    }
    return 0;
}
