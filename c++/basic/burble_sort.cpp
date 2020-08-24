//Simple implementation of burble sort
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[] = {2, 3, 6, 1, 7, 5, 4};
    int i, j, aux;

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                aux = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = aux;
                
                for (int i = 0; i < 7; i++)
                {
                    cout << numbers[i] << " ";
                }
                cout<<endl;
            }
        }
    }

    cout << "Ordened numbers: " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}
