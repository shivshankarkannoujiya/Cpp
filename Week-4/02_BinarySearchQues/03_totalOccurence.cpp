#include<iostream>
using namespace std;

int firstOccurence(int nums[], int size, int target){

    int startIndex = 0;
    int endIndex = size -1;
    int mid = startIndex + (endIndex - startIndex)/2;
    int ans = -1;

    while(startIndex <= endIndex){
        if(nums[mid] == target){
            ans = mid;
            endIndex = mid -1;
        }else if(target > nums[mid]){
            startIndex = mid+1;
        }else if(target < nums[mid]){
            endIndex = mid - 1;
        }
        mid = startIndex + (endIndex - startIndex)/2;
    }
    return ans;
}

int lastOccurence(int nums[], int size, int target){

    int startIndex = 0;
    int endIndex = size -1;
    int mid = startIndex + (endIndex - startIndex)/2;
    int ans = -1;

    while(startIndex <= endIndex){
        if(nums[mid] == target){
            ans = mid;
            startIndex = mid + 1;
        }else if(target > nums[mid]){
            startIndex = mid+1;
        }else if(target < nums[mid]){
            endIndex = mid - 1;
        }
        mid = startIndex + (endIndex - startIndex)/2;
    }
    return ans;
}


int totalOccurence(int nums[], int size, int target){
    int firstOccurenceIndex = firstOccurence(nums, size, target);
    int lastOccurenceIndex = lastOccurence(nums,size,target);
    int totalOccurenceOfElement = (lastOccurenceIndex - firstOccurenceIndex) + 1;
    return totalOccurenceOfElement;
}




int main()
{

    int nums [] = {10,20,30,30,30,30,40,50,60};
    int size = sizeof(nums)/sizeof(int);
    int target = 30;
    int totalTimeOccured  = totalOccurence(nums, size,target);
    cout<<"Ans is : "<<totalTimeOccured<<endl;
}