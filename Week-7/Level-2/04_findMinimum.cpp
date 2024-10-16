#include <iostream>
#include<limits.h>
using namespace std;

void getMin(int arr[], int size, int index, int &mini){
    if(index >= size){
        return;
    }

    // processing
    mini = min(mini, arr[index]);

    // Recursive Call
    getMin(arr, size, index + 1, mini);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int index = 0;
    int mini = INT_MAX;
    getMin(arr,size, index, mini);
    cout<<"Minimum number is mini: "<<mini<<endl;
}