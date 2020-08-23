#include <iostream>
#include <vector>

using namespace std;

int main()
{
    double n, aux;
    vector<double> nums;
    cout << "Ingrese un conjunto de 10 numeros reales." << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        nums.push_back(n);
    }

    cout << "[";

    for (int k = 0; k < nums.size(); k++)
    {
        cout << nums.at(k) << " ";
    }
    cout << "]";

    for (int i = 1; i < nums.size(); ++i)
    {
        for (int j = 0; j < (nums.size() - i); j++)
        {
            if (nums[j] > nums[j + 1])
            {
                aux = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = aux;
            }
        }
    }

    cout << " -> [";
    for (int k = 0; k < nums.size(); k++)
    {
        cout << nums.at(k) << " ";
    }
    cout << "]" << endl;

    return 0;
}