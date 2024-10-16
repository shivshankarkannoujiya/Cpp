#include<iostream>
using namespace std;

int findMissingElement(int nums[], int size){

    int start = 0; 
    int end = size - 1;
    int ans = 0;
    int mid = (start + end)/2;

    while(start <= end){

        int difference = nums[mid] - mid;
        if(difference == 1){
            start  = mid + 1;
        }else{
            // pattern Break 
            ans = nums[mid];
            end = mid-1;
        }
        mid = (start+end)/2;
    }

    if(ans -1 == -1){
        return size + 1;
    }
    return ans-1;
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int size  = sizeof(arr)/sizeof(int);

    cout<<"Missing Number is : "<<findMissingElement(arr,size)<<endl;
}