#include<iostream>
using namespace std;

int getSum(int n){
    if(n == 1){
        return 1;
    }

    int sum = n + getSum(n-1);
    return sum;
}

int main()
{
    int n = 10;
    int ans = getSum(n);
    cout<<"Sum is: "<<ans<<endl;
}