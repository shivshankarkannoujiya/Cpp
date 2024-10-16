#include<iostream>
using namespace std;

void printReverseCounting(int n){
    if( n == 1){
        cout<<n<<endl;
        return;
    }

    cout<<n<<endl;
    printReverseCounting(n - 1);
}

int main()
{
int n = 5;
printReverseCounting(n);
}