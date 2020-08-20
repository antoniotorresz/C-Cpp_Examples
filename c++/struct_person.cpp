#include <iostream>
#include <string.h>
using namespace std;
struct competidores
{
    int edad;
    string sexo;
    string club;
} competidor1;

int main(int argc, char const *argv[])
{
    cout << "Registro de competidores." << endl;

    cout << "Ingrese la edad del competidor:" << endl;
    cin >> competidor1.edad;

    cout << "Ingrese el genero del competidor:" << endl;
    cin >> competidor1.sexo;

    cout << "Ingrese el nombre del club del competidor:" << endl;
    cin >> competidor1.club;


    cout<<"Datos ingresados: "<<endl<<competidor1.edad<<endl<<competidor1.sexo<<endl<<competidor1.club<<endl;

    if (competidor1.edad <= 18 && competidor1.edad > 0)
    {
        cout << "El competidor pertenece a la categoria juvenil." << endl;
    }
    if (competidor1.edad > 18 && competidor1.edad <= 40)
    {
        cout << "El competidor pertenece a la categoria senior." << endl;
    }
    if (competidor1.edad > 40)
    {
        cout << "El competidor pertenece a la categoria veterano." << endl;
    }
    return 0;
}
