#include <iostream>
#include <stdio.h>
#include <random>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums;
    int *dir_n;

    for (int i = 0; i < 20; i++)
    {
        nums.push_back(-5 + rand() % ((50 + 1) - (-5)));
    }

    dir_n = &nums.at(0);

    for (int i = 0; i < nums.size(); i++)
    {
        if (*dir_n % 2 == 0)
        {
            cout << "El numero " << *dir_n << " almacenado en " << dir_n << " es par." << endl;
        }
        dir_n++;
    }
    nums.clear();
    return 0;
}
