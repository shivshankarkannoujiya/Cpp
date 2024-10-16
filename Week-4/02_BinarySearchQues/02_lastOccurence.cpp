#include<iostream>
using namespace std;

int lastOccurence(int nums[], int size, int target){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(nums[mid] == target){
            ans = mid;
            start = mid+1;
        }else if(target > nums[mid]){
            start = mid+1;
        }else if(target < nums[mid]){
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{
    int nums[] = {10,20,30,30,30,30,40,70,80};
    int size = sizeof(nums)/sizeof(int);
    int target = 30;
    int lastOccurenceofElement = lastOccurence(nums,size,target);
    cout<<"Last Occurence index is : "<<lastOccurenceofElement<<endl;
}