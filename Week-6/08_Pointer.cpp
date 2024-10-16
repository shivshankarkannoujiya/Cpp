#include<iostream>
using namespace std;

// ! Pass by Value
// void solve(int* p){
//     p = p + 1;
// }


// ! Pass by refrence
void solve(int* &p){
    p = p + 1;
}

int main()
{
    // int a = 10;
    // int *p = &a;
    // int **q = &a; //! ERROR

    int a = 5;
    int *p = &a;

    cout<<"p : "<<p<<endl;
    cout<<"&p : "<<&p<<endl;
    cout<<"*p : "<< *p<<endl;

    solve(p);

    cout<<"p : "<<p<<endl;
    cout<<"&p : "<<&p<<endl;
    cout<<"*p : "<< *p<<endl;

}