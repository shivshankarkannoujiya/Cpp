#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums){

    int sum = 0;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        sum = sum+nums[i];
    }
    int totalSum = (n*(n+1))/2;
    int ans = totalSum - sum;

    return ans;
}

int main()
{
    vector<int>nums = {0,1,5,3,2,6,8,7};
    int missingNum  = missingNumber(nums);
    cout<<"Missing Number is : "<<missingNum<<endl;
}

