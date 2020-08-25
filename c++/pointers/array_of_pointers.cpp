#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[10], *dir_numeros, *pos_men, *pos_may;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un valor para la posicion [" << i << "]: ";
        cin >> numeros[i];

        if (i == 0)
        {
            pos_men = &numeros[i];
            pos_may = &numeros[i];
        }
    }
    dir_numeros = numeros;

    cout << "[";

    for (int i = 0; i < 10; i++)
    {
        cout << *dir_numeros << ", ";
        if (*dir_numeros > *pos_may)
        {
            pos_may = dir_numeros;
        }
        if (*dir_numeros < *pos_men)
        {
            pos_men = dir_numeros;
        }

        dir_numeros++;
    }
    cout << "]" << endl;

    cout << "Mayor: " << *pos_may << ", ubicado en: " << pos_may << endl;
    cout << "Menor: " << *pos_men << ", ubicado en: " << pos_men << endl;

    return 0;
}
