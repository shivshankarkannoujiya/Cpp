#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            int number = j+1;
            char ch = number + 'A' - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}