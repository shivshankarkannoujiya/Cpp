#include <iostream>
using namespace std;


// !Function Declaration
void printLine();

int main()
{
    // !Function Call
    printLine();
}

// 1.
// TODO: Write a function to print "you have to fight" 10 times

// !Function Definition
void printLine()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "You ahve to fight" << endl;
    }
}