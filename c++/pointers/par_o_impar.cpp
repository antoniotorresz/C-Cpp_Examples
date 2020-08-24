#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero, *dir_numero;

    cout << "Ingrese un número: " << endl;
    cin >> numero;

    dir_numero = &numero;

    if (*dir_numero % 2 == 0)
    {
        cout << "El numero " << *dir_numero << " almacenado en " << dir_numero << " es par." << endl;
    }
    else
    {
        cout << "El numero " << *dir_numero << " almacenado en " << dir_numero << " es impar." << endl;
    }

    return 0;
}
