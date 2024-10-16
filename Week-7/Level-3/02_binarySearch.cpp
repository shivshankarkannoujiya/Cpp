#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target){
    if(start > end){
        return -1;
    }

    int mid = start + (end - start)/2;
    if(arr[mid] == target){
        return mid;
    }

    if(arr[mid] < target){
        return binarySearch(arr, mid + 1, end, target);
    }else{
        return binarySearch(arr, start, mid - 1, target);
    }
}


int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int start = 0;
    int end = size - 1;
    int target;
    cout<<"Enter the Target: ";
    cin>>target;

    int foundAtIndex = binarySearch(arr,start,end,target);
    if(foundAtIndex != -1){
        cout<<"Target found at index: "<<foundAtIndex<<endl;
    }else{
        cout<<"Target Not Found"<<endl;
    }
}