#include <iostream>
#include <limits.h>
using namespace std;

int maximizeTheCuts(int length, int x, int y, int z)
{
    if (length == 0)
    {
        return 0;
    }

    if (length < 0)
    {
        return INT_MIN;
    }

    int optionOne = 1 + maximizeTheCuts(length - x, z, y, z);
    int optionTwo = 1 + maximizeTheCuts(length - y, x, y, z);
    int optionThree = 1 + maximizeTheCuts(length - z, x, y, z);

    int finalAns = max(optionOne, max(optionTwo, optionThree));
    return finalAns;
}

int main()
{
    int length = 12;
    int x = 2;
    int y = 3;
    int z = 4;

    int maxCuts = maximizeTheCuts(length, x, y, z);
    cout << "Maximum Cuts is: " << maxCuts << endl;
}