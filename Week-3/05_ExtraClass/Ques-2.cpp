#include<iostream>
#include<vector>
using namespace std;


void sortColors(vector<int>& nums){

    int size = nums.size();
    int index = 0; 
    int left = 0;
    int right = size-1;

    while(index <= right){
        if(nums[index] == 0){
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if(nums[index] == 2){
            swap(nums[index], nums[right]);
            right--;
        }else{
            index++;
        }
        
    }
}

// Printng Array 
void printArray(vector<int>& nums){
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}


int main(){
    vector<int>nums = {2,0,1,1,0,1,0,1,2};
    sortColors(nums);
    printArray(nums); 
}