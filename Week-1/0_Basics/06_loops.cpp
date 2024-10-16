#include <iostream>
using namespace std;

int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout <<"Index : "<< i << " -> " << "Coding" << endl;
    // }

    // for(int i = 0 ; i<5; i++)
    // {
    //     cout<<i<<endl;
    // }

    // for (int i = 2; i<10; i=i+2){
    //     cout<<i<<endl;
    // }

    // for(int i =10 ; i>=0;i--){
    //     cout<<i<<endl;
    // }

    // int i = 1;
    // for (;;)
    // {
    //     if (i < 5)
    //     {
    //         cout << "Coding" << endl;
    //         i++;
    //     }else{
    //         break;
    //     }

    // }

    // !Nested_Loop
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << endl
    //          << "Outer Loop : " << i << endl;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "Inner Loop : " << j << endl;
    //     }
    // }

    // !Printin Table of n
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << endl;
    }
}