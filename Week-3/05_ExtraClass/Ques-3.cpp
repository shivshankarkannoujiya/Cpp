#include<iostream>
#include<vector>
using namespace std;


void rotateByK(vector<int>& nums , int k){

    int size = nums.size();
    vector<int>ans(size);

    for(int index = 0; index<size; index++){
        int newIndex = (index + k)%size;
        ans[newIndex] = nums[index];
    }
    nums = ans;
}

void printArray(vector<int>& nums){
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}


int main()
{
    vector<int>nums = {10,20,30,40,50,60};
    int k = 2; 
    rotateByK(nums, k);
    printArray(nums);
}