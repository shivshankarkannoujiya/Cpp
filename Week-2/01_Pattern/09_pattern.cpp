#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 2 * i + 1; j++)
        {

            if (j % 2 != 0)
            {
                cout << "*";
            }
            else
            {
                cout << i + 1;
            }
        }
        cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {

            if (j % 2 != 0)
            {
                cout << "*";
            }
            else
            {
                cout << n - i;
            }
        }

        cout<<endl;
    }
}