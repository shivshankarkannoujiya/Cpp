#include<iostream>
using namespace std;

bool isFoundTraget(int arr[], int size, int index, int target){

    // Solve for 0th index
    if(index >= size){
        return false;
    }

    if(arr[index] == target){
        return true;
    }

    // 0th se Aage -> wala recursion Smabhal lega
    bool ans = isFoundTraget(arr, size, index + 1, target);
    return ans;
}


int main()
{
    int arr[] = {10,20,40,50,60,70};
    int size = 7;
    int target = 90;
    int index = 0;  

    bool ans = isFoundTraget(arr,size,index,target);
    cout<<"Is target found: "<<ans<<endl;
}