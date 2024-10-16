#include<iostream>
using namespace std;


int findFirstOccurence(int arr[], int size, int target){

    int start = 0; 
    int end = size - 1;
    int ans  = -1;
    int mid = (start + end)/2;

    while(start <= end){
        if(arr[mid] == target){
            ans = mid;
            end = mid-1;
        }else if(target > arr[mid]){
            start = mid + 1;
        }else if(target < arr[mid]){
            end = mid-1;
        }

        mid = (start + end)/2;
    }
    return ans;
}

int main()
{
    int arr[] = {30,30,30,30,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 30;
    
    int firstIndex = findFirstOccurence(arr,size,target);
    cout<<"Element first Occurence at : "<<firstIndex<<endl;
}