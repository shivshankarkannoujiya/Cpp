#include <iostream>
using namespace std;

int main()
{

    int num = 8;
    int n = num / 2;

    // Full Pyramid
    for (int i = 0; i < n; i++)
    {

        // Spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Inverted Full Pyramid
    for (int i = 0; i < n; i++)
    {
        // Spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}