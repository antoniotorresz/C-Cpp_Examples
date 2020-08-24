#include <iostream>
#include <time.h>
#include <stdio.h>
#include <list>
#include <vector>

using namespace std;

void SumDiagonals(int input);
int main(int argc, char const *argv[])
{
    int n, m, counter = 0;
    cout << "Ingrese el numero de filas y columnas respectivamente: " << endl;
    cin >> n >> m;
    int input[n][m];
    list<int> output;

    for (int i = 0; i < n; i++)
    {
        cout << "|";
        for (int j = 0; j < m; j++)
        {
            input[i][j] = 0 + rand() % ((9 + 1) - 0);
            cout << input[i][j] << ", ";
            counter++;
        }
        cout << "|" << endl;
    }

    return 0;
}

void SumDiagonals(int input)
{
    
}