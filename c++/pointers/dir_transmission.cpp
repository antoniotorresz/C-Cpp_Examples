/*
Transmisión de direcciones
Ejemplo, intercambiar el valor de 2 variables
*/
#include <iostream>
using namespace std;

void intercambiar(float *, float *); //paso de parametros de tipo puntero en el protoripo de  la función

int main(int argc, char const *argv[])
{
    float x = 20.8, y = 6.78;

    cout << "Numero 1: " << x << ", Dirección en memoria: " << &x << endl;
    cout << "Numero 2: " << y << ", Dirección en memoria: " << &y << endl;

    intercambiar(&x, &y);

    cout << endl
         << "--------------- CAMBIO HECHO ---------------" << endl;
    cout << "Numero 1: " << x << ", Dirección en memoria: " << &x << endl;
    cout << "Numero 2: " << y << ", Dirección en memoria: " << &y << endl;

    return 0;
}

void intercambiar(float *dir_x, float *dir_y)
{
    float aux;
    aux = *dir_x;
    *dir_x = *dir_y;
    *dir_y = aux;
}
