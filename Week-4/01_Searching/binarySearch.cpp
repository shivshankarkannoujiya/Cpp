#include<iostream>
using namespace std;




int binarySearch(int arr[] , int size , int target){
    
    int start = 0; 
    int end = size-1;
    int mid = (start+end)/2;

    while(start <= end){

        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }

        // After every iteration update mid
        mid = (start+end)/2;
    }

    // if Target not found 
    return -1;
}


int main()
{

    int arr[]  = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 9;

    int ansIndex = binarySearch(arr, size , target);
    if(ansIndex == -1){
        cout<<"Target not Found !"<<endl;
    }else{
        cout<<"Target Found at index : "<<ansIndex<<endl;
    }
}