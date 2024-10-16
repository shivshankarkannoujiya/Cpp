#include<iostream>
#include<vector>
using namespace std;


void solve(int arr[], int size, int index, vector<int>& v){

    if(index >= size){
        return;
    }

    if(arr[index] % 2 == 0){
        v.push_back(arr[index]);
    }

    solve(arr,size, index+1, v);
}

void printVec(vector<int> &v){
    for(auto num: v){
        cout<<num<<" ";
    }
    cout<<endl;
}



void ddoubleArrayElements(int arr[], int size, int index){

    // Base Case
    if(index >= size){
        return;
    }

    // Processing
    arr[index] = 2 * arr[index];

    // Recursive Call 
    ddoubleArrayElements(arr, size, index+1);
}

void printArr(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {2,3,6,7,8,10,1,11};
    int size = 8;
    int index = 0;
    // vector<int>v;
    // solve(arr,size,index,v);
    // printVec(v);
    
    ddoubleArrayElements(arr,size,index);
    printArr(arr,size);

}