#include<iostream>
using namespace std;

void printArray(int *arr, int size, int index){
    if(index >= size){
        return;
    }

    cout<<arr[index]<<" ";
    printArray(arr, size, index + 1);
    cout<<endl;
}


int main(){
    int arr[] = {1,2,3,4,5};
    int index = 0;
    int size = 5;
    printArray(arr,size,index);
}