#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(vector<int>& nums,int target){
    int size = nums.size();
    for(int i = 0; i<size; i++){
        if(nums[i] == target){
            return true;
        }
    }

    return false;
}

int main()
{
    vector<int>nums = {1,2,3,4,5,6,7,8,9,10};
    int target = 10;
    bool ans = linearSearch(nums, target);
    if(ans == true){
        cout<<"Target Element is found"<<endl;
    }else{
        cout<<"Target Element is not Found"<<endl;
    }
}