#include <iostream>
#include<limits.h>
using namespace std;

void getMax(int arr[], int size, int index, int &maxi){

    if(index >= size){
        return;
    }

    maxi = max(maxi, arr[index]);
    getMax(arr, size, index + 1, maxi);
}


int main()
{
    int arr[] = {2,3,4,5,6,7,1};
    int index = 0;
    int size = 7;
    int maxi = INT_MIN;

    getMax(arr, size, index, maxi);
    cout<<"Maximum Number: "<<maxi<<endl;
}