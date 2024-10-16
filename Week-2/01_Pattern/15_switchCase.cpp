#include <iostream>
using namespace std;

int main()
{
    // TODO: Create a simple calculator using if-else-if statement

    float a, b;
    cout << "Enter first Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;

    int operation;
    cout << "What operation you want to do ? ";
    cin >> operation;
    float ans = 0;

    if (operation == 0)
    {
        ans = a + b;
    }
    else if (operation == 1)
    {
        ans = a - b;
    }
    else if (operation == 2)
    {
        ans = a * b;
    }
    else if (operation == 3)
    {
        if (b != 0)
        {
            ans = a / b;
        }
        else
        {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
    }
    else
    {
        cout << "Invalid Operation" << endl;
        return 0;
    }

    cout << "Ans is : " << ans << endl;
    return 0;
}