#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[], int size ){

    cout<<"Printing Array : ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    // TODO: Static memory allocation 
    // int arr[5] = {1,2,3,4,5};
    // int size = 5;
    // printArray(arr,size);


    // TODO: Dynamic Memory Allocation
    // int n;
    // cout<<"Enter value of n : ";
    // cin>>n;
    // int *arr = new int[n];
    
    // Taking input
    // for(int i = 0; i<n; i++){
    //     cout<<"Enter value at index -> "<<i<<" : ";
    //     int data;
    //     cin>>data;
    //     arr[i] = data;
    // }

    // printArray(arr,n);

    // TODO: Vector

    vector<int>v;

    while(true){
        int data;
        cout<<"Enter the data : ";
        cin>>data;
        v.push_back(data);
        cout<<"Capacity : "<<v.capacity()<<endl;
        cout<<"Size : "<<v.size()<<endl;
    }

    

}