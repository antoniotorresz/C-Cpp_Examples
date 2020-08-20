#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string cadena;
    string cadena2;
    float valor1, valor2, valor3;

    printf("Hello, world! \n");
    cout << "Hola mundo from c++" << endl;

    cout << "Este es un segundo mensaje " << 10.5 << " c" << endl;

    cout << "Ingrese los valores:" << endl;
    cin >> valor1 >> valor2 >> cadena >> valor3 >> cadena;

    cout << cadena << endl
         << cadena2 << endl;

    cout << "Valores ALV:" << endl
         << valor1 << endl
         << valor2 << endl
         << valor3 << endl
         << cadena << endl
         << cadena2;
}