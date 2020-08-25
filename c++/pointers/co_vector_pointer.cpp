#include <iostream>
#include <vector>
#include <time.h>
#include <random>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> numeros;
    int *dir_num; 

    for (int i = 0; i < 10; i++)
    {
        numeros.push_back(-50 + rand() % ((50 + 1) - (-50)));
    }

    dir_num = &numeros.at(0);
    for (int n : numeros)
    {
        cout << "[" << n << "] -> " << dir_num++ << endl;
    }

    return 0;
}
