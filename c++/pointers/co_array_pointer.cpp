//Correspondencia entre arrays y punteros
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[] = {1, 2, 3, 4, 5};
    int *dir_numeros;

    dir_numeros = &numeros[0];

    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento " << numeros[i] << " esta en " << dir_numeros++ << endl;
    }

    return 0;
}
