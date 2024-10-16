#include <iostream>
#include<vector>
using namespace std;


int findTarget(int arr[], int size, int index, int target){

    // Base Case
    if(index >= size){
        return -1;
    }

    // Processing
    if(arr[index] == target){
        return index;
    }

    return findTarget(arr, size, index + 1, target);
}

void printIndexOfAllOccurence(int arr[], int size, int index, int target){
    if(index == size){
        return;
    }

    if(arr[index] == target){
        cout<<index<<" ";
    }

    printIndexOfAllOccurence(arr,size,index+1,target);
}

vector<int> returnIndexOfAllOccurences(int arr[], int size, int index, int target){

    vector<int>ans;
    if(index >= size){
        return ans;
    }

    if(arr[index] == target){
        ans.push_back(index);
    }

    vector<int>recursiceAns = returnIndexOfAllOccurences(arr,size,index + 1, target);
    ans.insert(ans.end(), recursiceAns.begin(), recursiceAns.end());
    return ans;
}

void printVector(vector<int>v){
    for(auto num:v){
        cout<<num<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,1,3,1,45,6,7,8};
    int index = 0; 
    int size = 7;
    int target = 1;
    // int ans = findTarget(arr,size, index, target);
    // cout<<"isTargetFound: "<<ans<<endl;
    //  printIndexOfAllOccurence(arr,size,index,target);

    vector<int>ans = returnIndexOfAllOccurences(arr,size,index,target);
    printVector(ans);
    
}