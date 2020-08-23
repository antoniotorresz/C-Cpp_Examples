//iostream y vector son bibliotecas de clases
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Definiendo un arreglo en C puro
    int arrEnteros[] = {10, 20, 30, 40, 50};
    arrEnteros[5] = 60;
    for (int i = 0; i < 6; i++)
        cout << "arrEnteros[" << i << "] =" << arrEnteros[i] << endl;

    //Definiendo un vector en C++
    cout << endl
         << endl;
    vector<int> vecEnteros = {10, 20, 30, 40, 50};
    vecEnteros.push_back(60);
    //vecEnteros.as no se que funcion estés llamando aqui, pon atención a la pantalla del profe
    for (int i = 0; i < vecEnteros.size(); i++)
    {
        cout
            << "vecEnteros<" << i << "> =" << vecEnteros[i] << endl;
    }

    cout << "El vecEnteros tiene tamaño(size)=" << vecEnteros.size() << endl;
    cout << "El vecEnteros tiene capacidad( capacity)=" << vecEnteros.capacity() << endl;

    //Definiendo un vector de vectores (Equivaldria a una matriz usando arreglos)
    cout << endl
         << endl;
    vector<vector<float>> matriz = {{1, 2, 3, 4}, {4.1, 5.2, 6.3}, {78, 9.0}};
    cout << "La matriz de flotantes tiene tamaño = " << matriz.size() << endl;
    //Leyendo las filas de la matriz
    for (int i = 0; i < matriz.size(); i++)
    {
        for (int j = 0; j < matriz.at(i).size(); j++)
            cout << matriz.at(i).at(j) << "";
        cout << endl;
    }
    return 0;
}