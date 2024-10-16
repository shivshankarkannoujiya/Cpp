#include<iostream>
#include<vector>
using namespace std;


int peakIndexInMountainArray(vector<int>& nums){
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(nums[mid] < nums[mid+1]){
            start = mid + 1;
        }else{
            // Standing at {Part - B} or PEAK
            // goto left
            end = mid;
        }
        mid  = start + (end - start)/2;
    }

    // return start;
    // return end;
    // return mid;

    // if peak Element then return nums[start/end/mid]
    // return nums[mid];
    
    return start;
}


int main()
{
    vector<int>nums = {10,20,30,90,70,60,50,40};
    int peakIndex = peakIndexInMountainArray(nums);
    cout<<"Peak Index in Mountain Array is : "<<peakIndex<<endl;
}