#include<iostream>
using namespace std;

void solve(int *arr, int size){
    // cout<<"Size of Array inside -> solve : "<<sizeof(arr)<<endl;
    // cout<<"Inside solve -> arr: "<< arr<<endl;
    // cout<<"Inside solve -> &arr: "<< &arr<<endl;

    *arr = *arr + 1;
}


void printArr(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    // cout<<"Size of Array inside -> main : "<<sizeof(arr)<<endl;
    // solve(arr,5);
    // cout<<"Inside main -> arr: "<< arr<<endl;
    // cout<<"Inside main -> &arr: "<< &arr<<endl;

    cout<<"Printing Array before Calling solve fn : "<<endl;
    printArr(arr,5);
    solve(arr,5);
    cout<<"Printing After before Calling solve fn : "<<endl;
    printArr(arr,5);

    
}