#include <iostream>
#include <stdlib.h>
using namespace std;

int size, *numbers, input, positon;

void askData();
void displayData();
bool search(int n);

int main(int argc, char const *argv[])
{
    askData();
    displayData();

    cout << "Enter a number to find: " << endl;
    cin >> input;

    if (search(input))
    {
        cout << input << " found at: "
             << "[" << positon << "] position, "
             << "saved in: " << &numbers[positon] << endl;
    }
    else
    {
        cout << "Number not found in array." << endl;
    }

    return 0;
}

void askData()
{
    cout << "Enter array lenght: " << endl;
    cin >> size;

    numbers = new int[size];
    int i = 0;

    while (i < size)
    {
        cout << "Enter number for [" << i << "]:" << endl;
        cin >> numbers[i];
        i++;
    }
}

bool search(int n)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (n == numbers[i])
        {
            found = true;
            positon = i;
            break;
        }
    }
    return found;
}

void displayData()
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << ", ";
    }
    cout << "]" << endl;
}