/*
Problema 1
Escribir una funci ́on que tome de entrada una matriz A de tama ̃no M × N y que calcule dos
n ́umeros: el n ́umero de columnas de A cuyos elementos est ́an ordenados en orden estrictamente
creciente, y el n ́umero de filas que cumplen con esa misma propriedad. Si programa en C, la
cabecera de la funci ́on podr ́ıa ser la siguiente: void calculateNumbers(int A[M][N], int
&nCols, int &nRows), donde A es la matriz de entrada, y en nCols y nRows deben quedar
almacenadas las cantidades solicitadas.
Ejemplo: ante la ejecuci ́on de la funci ́on con la siguiente matriz

A =
|10 50 70 0    |
|200 200 170 20|
|0 45 120 156  |
|2 78 89 200   |

la funci ́on debe calcular 1, 2 porque la  ́unica columna que cumple el requerimiento es la  ́ultima,
y las dos  ́ultimas filas cumplen el requerimiento.
*/

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int n, m, filOrd = 0, colOrd = 0;
vector<vector<int>> a;
void calculateNumbers(vector<vector<int>> A, int, int);
void fill_vector();
void show();
bool verifyOrd(vector<int> v);

int main(int argc, char const *argv[])
{
    cout << "Ingrese las dimensiones de la matriz: " << endl;
    cin >> n >> m;
    fill_vector();
    show();
    calculateNumbers(a, a.at(0).size(), a.size());
    cout << filOrd << ", " << colOrd << endl;
    return 0;
}

void fill_vector()
{
    vector<int> fila;
    int val;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Valor para [" << i << "][" << j << "]" << endl;
            cin >> val;
            fila.push_back(val);
        }
        a.push_back(fila);
        fila.clear();
    }
}

void show()
{
    for (vector<int> fila : a)
    {
        cout << "| ";
        for (int n : fila)
            cout << n << " ";
        cout << "|" << endl;
    }
}

void calculateNumbers(vector<vector<int>> A, int nCols, int nRows)
{
    vector<int> aux;

    for (int i = 0; i < nCols; i++)
    {
        for (int j = 0; j < nRows; j++)
        {
            aux.push_back(A.at(i).at(j));
        }

        if (verifyOrd(aux))
            filOrd++;

        aux.clear();
    }

    for (int i = 0; i < nCols; i++)
    {
        for (int j = 0; j < nRows; j++)
        {
            aux.push_back(A.at(j).at(i));
        }

        if (verifyOrd(aux))
            colOrd++;

        aux.clear();
    }
}

bool verifyOrd(vector<int> v)
{
    bool ordenado = true;

    cout << "Recibiendo: [ ";
    for (int n : v)
        cout << n << " ";
    cout << "]" << endl;
    
    for (int i = 1; i < v.size(); i++)
    {
        if (v.at(i) < v.at(i - 1))
        {
            ordenado = false;
            break;
        }
    }

    return ordenado;
}