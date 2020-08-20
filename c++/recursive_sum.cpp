#include <iostream>
using namespace std;

int sum(int n);
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << "Summatory: " << sum(n)<<endl;
    return 0;
}

int sum(int n)
{
    if (n >= 1)
    {
        return n + sum(n - 1);
    }
    else
    {
        return 0;
    }
}