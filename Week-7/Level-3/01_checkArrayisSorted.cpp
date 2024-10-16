#include <iostream>
using namespace std;


bool isArraySorted(int arr[], int size, int index){
    if(index >= size){
        return true;
    }

    if(arr[index] > arr[index - 1]){
        bool AageKaAns = isArraySorted(arr,size, index + 1);
        return AageKaAns;
    }else{
        return false;
    }

}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    int index = 1;

    bool ans = isArraySorted(arr, size, index);
    if (ans)
    {
        cout<<"Array is Sorted"<<endl;
    }else{
        cout<<"Array is not sorted"<<endl;
    }
    
}