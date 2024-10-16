#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& v){
    
    for(int i = 1; i<v.size(); i++){

        int key = v[i]; //fetching
        int j = i - 1;

        while(j >= 0 && v[j] > key){
            
            v[j + 1] = v[j]; //shifting
            j--;
        }

        v[j + 1] = key; //insertion or copy at right position
    }
}

void printArray(vector<int>& v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int>nums{5,4,3,2,1};
    insertionSort(nums);
    printArray(nums);

}