#include <iostream>
using namespace std;

struct Persona
{
    char nombre[50];
    int edad;
} persona1, persona2;

int main(int argc, char const *argv[])
{
    cout << "Ingrese el nombre de la persona 1:" << endl;
    cin >> persona1.nombre;

    cout << "Ingrese la edad de la persona 1:" << endl;
    cin >> persona1.edad;

    cout << "Ingrese el nombre de la persona 2:" << endl;
    cin >> persona2.nombre;

    cout << "Ingrese la edad de la persona 2:" << endl;
    cin >> persona2.edad;

    cout << persona1.nombre << endl;
    cout << persona2.nombre << endl;
    cout << persona1.edad << endl;
    cout << persona2.edad << endl;
    return 0;
}
