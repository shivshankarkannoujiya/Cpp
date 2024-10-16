#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {

        // inverted Pyramid
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        // full Pyramid
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << " ";
        }

        // Inverted pyramid 2
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        cout << endl;

    }


        for (int i = 0; i < n; i++)
    {

        // inverted Pyramid
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }

        // full Pyramid
        for (int j = 0; j < 2*n-2*i-1; j++)
        {
            cout << " ";
        }

        // Inverted pyramid 2
        for (int j = 0; j <  i+1; j++)
        {
            cout << "*";
        }

        cout << endl;

    }
}