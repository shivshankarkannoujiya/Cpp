#include<iostream>
#include<vector>
using namespace std;


int rob(vector<int>& nums, int index){

    if(index >= nums.size()){
        return 0;
    }

    //Agar chori hua at ith index: optionOne
    //Agar chori hua at ith index: optionTwo
    int optionOne = nums[index] + rob(nums, index + 2);
    int optionTwo = 0 + rob(nums, index + 1);

    int finalAns = max(optionOne, optionTwo);
    return finalAns;
}

int main(){

    vector<int> nums{1,2,3,1};
    int index = 0;
    int ans = rob(nums,index);
    cout<<"Ans is: "<<ans<<endl;
}