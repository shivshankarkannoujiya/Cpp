#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int row = 0; row < n; row++)
    {

        // Spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        // Stars
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row + 1 - 1)
            {
                cout << "* "; 
            }
            else
            {
                cout << "  ";
            }
        }

        cout<<endl;
    }
}