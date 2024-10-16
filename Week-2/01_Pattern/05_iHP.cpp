#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    // for (int i = 0; i < n; i++)
    // {

    //     // Spaces
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     // Stars
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         if (j == 0 || j == n - i - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Using Formula
    for (int i = 0; i < n; i++)
    {

        // Spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < ((2 * n - 2 * i) - 1); j++)
        {
            if (j == 0 || j == (2 * n - 2 * i) - 1 - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
