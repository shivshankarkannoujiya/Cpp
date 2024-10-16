#include<iostream>
#include<math.h>
using namespace std;

// ! Brute force : TC = O(N)
bool isPrime(int num){


    // corner case
    if (num <= 1)
    {
        return false;
    }
    
    for (int i = 0; i < num; i++)
    {
        if (num % 2 == 0)
        {
            return false;
        }
        
    }

    return true;

}

// ! Optimal Approach : TC = sqrt(N)
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


int main()
{
    int number;
    cout<<"Enter the Number : ";
    cin>>number;

    bool ans = isPrime(number);

    if (ans == false)
    {
        cout<<"Not a Prime Number!"<<endl;
    }else{
        cout<<"Prime Number"<<endl;
    }
    
}