/*
z1 = 5 - 3i, z2 = -4 + 2i

z1 + z2?
*/

#include <iostream>
using namespace std;
struct complex
{
    float real, imaginary;
} z1, z2;

void askData();
complex add(complex, complex);
void showResult(complex x);


int main(int argc, char const *argv[])
{
    askData();
    complex result = add(z1, z2);
    showResult(result);
    return 0;
}

void askData()
{
    cout << "Enter first complex number data" << endl;

    cout << "z1 Real part: " << endl;
    cin >> z1.real;
    cout << "z1 Imaginary part: " << endl;
    cin >> z1.imaginary;

    cout << "z2 Real part: " << endl;
    cin >> z2.real;
    cout << "z3 Imaginary part: " << endl;
    cin >> z2.imaginary;
}

complex add(complex z1, complex z2)
{
    z1.real += z2.real;
    z1.imaginary += z2.imaginary;

    return z1;
}

void showResult(complex x)
{
    cout << "Result: " << x.real << " Real, " << x.imaginary << " Imaginary." << endl;
}