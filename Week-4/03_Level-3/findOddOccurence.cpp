#include<iostream>
#include<vector>
using namespace std;


int oddOccuringElement(vector<int>& nums){
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int mid = low + (high - low)/2;

    while(low <= high){
        if(low == high){
            return low;
        }

        if(mid & 1){ // odd
            if((mid - 1) >= 0 && nums[mid] == nums[mid - 1]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }else{//even
            if((mid + 1) < n && nums[mid] == nums[mid + 1]){
                low = mid + 2;
            }else{
                high = mid;
            }
        }

        mid = low + (high - low)/2;
    }

    return -1;
}


int main()
{
    vector<int>nums = {10,10,2,2,5,5,2,5,5,20,20,11,11,10,10};
    int ansIndex = oddOccuringElement(nums);
    if(ansIndex == -1){
        cout<<"Not Found!"<<endl;
    }else{
        cout<<"Odd Occuring Element is  : "<<nums[ansIndex]<<endl;
    }

}