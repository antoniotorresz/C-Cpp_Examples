/*
Asignacion dinamica de arreglos

new: Reserva el numero de bytes solicitado por la declaración
delete: libera un bloque de bytes reservado con anterioridad

Ejemplo: Pedir n calificaciones y almacenarlas en un arreglo dinamico
*/

#include <iostream>
#include <stdlib.h> //Uso de new y delete (reservación de memoria)
using namespace std;

//prototipo de la funcion
void pedirNotas();
void mostrarNotas();

int nCalificaciones, *calif;
int main(int argc, char const *argv[])
{
    pedirNotas();
    mostrarNotas();

    delete[] calif; //Liberamos el espacio en bytes usados anteriormente
    return 0;
}

void pedirNotas()
{
    cout << "Digite el numero de calificaciones: ";
    cin >> nCalificaciones;
    calif = new int[nCalificaciones]; //Creamos un array de tamaño dinámico

    for (int i = 0; i < nCalificaciones; i++)
    {
        cout << "Ingrese la nota[" << i << "]: ";
        cin >> calif[i];
    }
}

void mostrarNotas()
{
    cout << endl
         << "las notas del usuario son: " << endl;

    for (int i = 0; i < nCalificaciones; i++)
    {
        cout << calif[i] << endl;
    }
}