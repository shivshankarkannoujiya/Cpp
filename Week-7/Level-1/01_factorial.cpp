#include<iostream>
using namespace std;

int factorial(int n){

    // Base Case
    if( n == 1 || n == 0){
        return 1;
    }

    // Recursive relation
    int recursionAns = factorial(n - 1);
    int finalAns = n * recursionAns;
    return finalAns;
}

int main(){

    int n = 5;
    int fact = factorial(n);
    cout<<"Ans is : "<<fact<<endl;
}