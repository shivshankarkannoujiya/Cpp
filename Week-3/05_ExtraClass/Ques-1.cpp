#include<iostream>
using namespace std;

void shiftNegativeValueOneSide(int arr[], int size){
    int j = 0; 
    for(int i = 0; i<size; i++){
        if(arr[i] < 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}


void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<< " ";
    }
}

int main()
{
    int arr[] = {12,-7,90,-6,-7,11,13,-10,-9};
    int size = sizeof(arr)/sizeof(arr[0]);
    shiftNegativeValueOneSide(arr,size);
    printArray(arr,size);

}