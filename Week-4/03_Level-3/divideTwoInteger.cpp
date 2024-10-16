#include<iostream>
using namespace std;

int divide(int divisor , int dividend){

    int low = 0; 
    int high = dividend;
    int mid  = low + (high - low)/2;
    int ans = -1;

    while(low <= high){
        
        if(mid * divisor == dividend){
            return mid;
        }else if(mid * divisor < dividend){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
        mid  = low + (high - low)/2;
    }

    return ans;
}

int main()
{
    int dividend = 35;
    int divisor = 7;

    int quotient = divide(abs(divisor) , abs(dividend));

    if((dividend > 0 && divisor < 0 ) || (dividend < 0 && divisor > 0 )){
        quotient = 0 - quotient;
    }
    cout<<"Ans is : "<<quotient<<endl;

}