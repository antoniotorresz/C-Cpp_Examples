/*
Declaración de punteros. 
Un puntero es una variable que almacena la dirección en memoria de otra variable.

&n = la direccion de n
*n la variable cuya dirección está almacenada en n
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, *dir_num;
    num = 20;
    dir_num = &num;

    cout << "Mostamos la dirección en memoria de la variable: " << endl;
    cout << "Numero: " << num << endl;
    cout << "La dirección en memoria de la variable es: " << &num << endl
         << endl;

    cout << "Mostamos el contenido de la variable y su posicion dentro de memoria con el uso de punteros: " << endl;
    cout <<"El valor "<< *dir_num <<" se encuentra en la dirección " << dir_num << " de memoria." << endl;

    return 0;
}
