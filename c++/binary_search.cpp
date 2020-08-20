#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int inf, sup, mit, x;
    bool encontrado = false;

    x = 10;
    inf = 0;
    sup = 10;

    while (inf <= sup)
    {
        mit = (inf + sup) / 2;

        if (numeros[mit] == x)
        {
            encontrado = true;
            break;
        }

        if (numeros[mit] > x)
        {
            sup = mit;
            mit = (inf + sup) / 2;
        }

        if (numeros[mit] < x)
        {
            inf = mit;
            mit = (inf + sup) / 2;
        }
    }

    if (encontrado)
    {
        cout << "El numero " << x << " se encontro en la posision a[" << mit << "]" << endl;
    }
    else
    {
        cout << "No se encontro el numero" << endl;
    }

    return 0;
}
 