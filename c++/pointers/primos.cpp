#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, *dir_n, divisores = 0;

    cin >> n;
    dir_n = &n;

    for (int i = 1; i <= *dir_n; i++)
    {
        if (divisores > 2)
        {
            break;
        }
        else
        {
            if (*dir_n % i == 0)
            {
                divisores++;
            }
        }
    }

    if (divisores > 2)
    {
        cout << "El número " << *dir_n << " almacenado en " << dir_n << " es un numero compuesto" << endl;
    }
    else
    {
        cout << "El número " << *dir_n << " almacenado en " << dir_n << " es un numero primo" << endl;
    }
    return 0;
}
