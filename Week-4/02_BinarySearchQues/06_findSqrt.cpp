#include<iostream>
using namespace std;


int floorSqrt(int n){

    int low = 1;
    int high = n;
    int ans = 0;

    while(low <= high){

        long long mid = (low + high)/2;
        long long squareVal = (mid * mid);
        if(squareVal <= n){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return high;
    // return ans;
}


int main()
{
    int n;

    cout<<"Enter the value want to get Sqrt : ";
    cin>>n;

    // calling fn 
    int ans = floorSqrt(n);
    cout<<"Sqrt is : "<<ans<<endl;
}