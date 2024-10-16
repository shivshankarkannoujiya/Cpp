#include<iostream>
using namespace std;


void mergeArray(int arr[], int start, int end){

    int mid = (start + end)/2;
    
    // get len of left and right array
    int leftlen = mid - start + 1;
    int rightlen = end - mid;

    // Create left and right array
    int *leftArray = new int[leftlen];
    int *rightArray = new int[leftlen];

    // Copy values from original array to left array 
    int k = start;
    for(int i = 0; i < leftlen; i++){
        leftArray[i] = arr[k];
        k++;
    }

    // Copy values from original array to right array 
    k = mid + 1;
    for(int i = 0; i < rightlen; i++){
        rightArray[i] = arr[k];
        k++;
    }

    // Merge leftArray and rightArray 
    int leftIndex = 0;
    int rightIndex = 0;
    int originalArrIndex = start;

    while(leftIndex < leftlen && rightIndex < rightlen){
        if(leftArray[leftIndex] < rightArray[rightIndex]){
            arr[originalArrIndex] = leftArray[leftIndex];
            originalArrIndex++;
            leftIndex++;
        }else{
            arr[originalArrIndex] = rightArray[rightIndex];
            originalArrIndex++;
            rightIndex++;
        }
    }

    // Corner Cases
    // 1. left array exhausted and right array element left
    while(rightIndex < rightlen){
        arr[originalArrIndex] = rightArray[rightIndex];
        originalArrIndex++;
        rightIndex++;
    }

    // 2. right array exhausted and left array element left
    while(leftIndex < leftlen){
        arr[originalArrIndex] = leftArray[leftIndex];
        originalArrIndex++;
        leftIndex++; 
    }

    // Deallocate memory
    delete[] leftArray;
    delete[] rightArray;
}


void mergeSort(int arr[], int start, int end){

    // Base case
    if(start >= end){
        return;
    }

    int mid = (start+end)/2;

    // Recursive Call for left and right parts
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    // Merge Array: left and right
    mergeArray(arr, start, end);
}


void printArray(int arr[], int size){
    for(int i  = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {2,1,6,9,4,5};
    int size = 6;
    int start = 0;
    int end = size - 1;

    mergeSort(arr, start, end);
    printArray(arr,size);

}