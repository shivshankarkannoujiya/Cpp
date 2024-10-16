#include<iostream>
using namespace std;

int climbStair(int n ){
    if( n == 0 || n == 1){
        return 1;
    }

    int ans = climbStair(n - 1) + climbStair(n - 2);
    return ans;
}

int main(){

    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int ans = climbStair(n);
    cout<<"Total way to go till n: "<<ans<<endl;
}