#include <iostream>
using namespace std;

int main()
{
    int Row = 5;
    int Col = 5;
    for (int row = 0; row < Row; row++)
    {
        for (int col = 0; col < Col; col++)
        {
            if (row == 0 || row == Row - 1)
            {
                cout << "*";
            }
            else
            {
                if (col == 0 || col == Col - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout<<endl;
    }
}