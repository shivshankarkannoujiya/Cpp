#include<iostream>
#include <math.h>
using namespace std;

// ! Brute force Approach : TC = O(n)
bool isPrime(int num){

    // corner case

    if (num <= 1)
    {
        return false;
    }
    

    for(int i = 2; i<num; i++){
        if(num % i == 0){
            return false;
        }
    }

    return true;
}


// ! Optimal Approach : TC = sqrt(n)
bool isPrimeOptimal(int n){

    if(n <= 1){
        return false;
    }

    for(int i = 2; i<=sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}


// +++++++++++++++++++++++++ Counting Function +++++++++++++++++++

int countPrimes(int num){

    int count = 0;
    for(int i = 0; i<num; i++){
        if(isPrime(i)){
            count++;
        }
    }

    return count;
}





int main()
{
    int num;
    cout<<"Enter the num : ";
    cin>>num;

    // int totalPrime = countPrimes(num);
    // cout<<"Ans is : "<<totalPrime<<endl;

    bool ans = isPrimeOptimal(num);
    cout<<"Ans is : "<<ans<<endl;

    if (ans == false)
    {
        cout<<"NOt"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
    
}