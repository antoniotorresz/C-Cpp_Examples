#include <iostream>
using namespace std;
void newVal(int &, int &);
int main(int argc, char const *argv[])
{
    int n, n2;
    cout << "Ingrese dos numeros:" << endl;
    cin >> n >> n2;
    newVal(n, n2);
    cout << (n + n2) << endl;
    return 0;
}

void newVal(int &xnum, int &ynum) // paso de valores por referencia
{
    cout << (xnum + ynum) << endl;
    xnum = 1;
    ynum = 2;
}
