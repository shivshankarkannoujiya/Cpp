#include<iostream>
using namespace std;

//TODO: Call By value
int incrementBy1(int n){
    n = n+1;
    cout<<"N is : "<<n<<endl;
    return n;
}

// TODO: Call by Refrence
int callByRefrence(int &n){

    n = n+1;
    cout<<"Value inside function : "<<n<<endl;
    return n;
}



int main()
{
    // int n = 5;
    // int &k = n;
    // int &c = n;


    // cout<<n<<endl;
    // cout<<k<<endl;
    // cout<<c<<endl;

    // Can update usin the refrence variable 

    // int &t = 6; //! ERROR

    int n = 5;

    //TODO: Call By value
    // int N = incrementBy1(n);
    // cout<<"N is : "<<n<<endl;

    //TODO: Call By Refrence
    // int N = callByRefrence(n);
    // cout<<"Value after Update inside main  : "<<N<<endl;




}