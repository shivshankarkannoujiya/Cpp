#include<iostream>
using namespace std;


// TODO: Find Unique element
int getUniqueElement(int arr[], int size){
    int ans = 0; 
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}


// TODO: Find All Pairs in an Array 
void printAllPair(int arr[], int size){
    for(int i = 0; i<size; i++){
        for(int j =0; j<size; j++){
            cout<<"( "<<arr[i]<<" , " <<arr[j]<<" )"<<endl;
        }
        cout<<endl;
    }
}



 // TODO: Print Triplets
void printAllTriplets(int arr[], int size){
    for(int i = 0; i<size; i++){
        for(int j =0; j<size; j++){
            for(int k =0; k<size; k++){
                cout<<"{ "<<arr[i]<<" , "<<arr[j]<<" , "<<arr[k]<<" , "<<" }"<<endl;
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

    // TODO: Sort zeros and ones
    void sortZeroOne(int arr[], int size){

        // !Counting
        int zeroCount = 0;
        int oneCount = 0;
        for(int i = 0; i<size; i++){
            if(arr[i] == 0){
                zeroCount++;
            }
            else if(arr[i] == 1){
                oneCount++;
            }
        }

        // !Place zeros first
        int index = 0; 
        while(zeroCount--){
            arr[index] = 0;
            index++;
        }

        // !place One 
        while(oneCount--){
            arr[index] = 1;
            index++;
        }

    }

    // TODO: shift array elements by 1
    void shiftArray(int arr[], int size){
        int temp = arr[size-1];
        for(int i = size-1 ; i>=1; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }


int main()
{


    // TODO: Find Unique element
    // int arr[] = {1,2,3,1,2,5,6,5,6};
    // int size = sizeof(arr)/sizeof(int);
    // int uniqueElement = getUniqueElement(arr,size);
    // cout<<"Final ans : "<<uniqueElement<<endl;


    // TODO: Find All Pairs in an Array
    // int arr[] = {10,20,30};
    // int size = sizeof(arr)/sizeof(int);
    // printAllPair(arr,size);


    // !ERROR : Out of bound 
    // int brr[] = {10,20,30,40};
    // int  n = 4; 
    // for(int i =0; i<n/2; i++){
    //     for(int j =n; j>=0;j--){
    //         cout<<"( "<<brr[i]<<" , " <<brr[j]<<" )"<<endl;
    //     }
    // }

    // TODO: Print Triplets
    
    // int a[] = {1,2,3};
    // int size = sizeof(a)/sizeof(int);
    // printAllTriplets(a,size);

    // TODO: Sort zeros and ones
    // int arr[] = {1,0,0,0,1,1,0,1,0,1,0,0,1,0,1,0,0,0,0,1};
    // int size = sizeof(arr)/sizeof(int);
    // sortZeroOne(arr,size);

    // !Printing array after sorting
    // for(int i = 0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }

    // TODO: shift array elements by 1
    // int arr[] = {10,20,30,40,50,60};
    // int size = sizeof(arr)/sizeof(int);
    // shiftArray(arr,size);

    // !Printing Array
    // for(int i = 0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }


}