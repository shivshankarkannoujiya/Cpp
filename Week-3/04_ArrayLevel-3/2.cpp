#include<iostream>
#include<limits.h>
using namespace std;

bool findTarget(int arr[][4], int row , int col, int target){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

// TODO: Find maxNum
int findmaxNum(int arr[][4], int row, int col){
    int maxNum = INT_MIN;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j]>maxNum){
                maxNum = arr[i][j];
            }
        }
    }
    return maxNum;
}


 // TODO: Find MinNum
int findminNum(int arr[][4], int row, int col){
    int minNum = INT_MAX;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j]<minNum){
                minNum = arr[i][j];
            }
        }
    }
    return minNum;
}


// TODO: Print Row wise sum 
void printRowSum(int arr[][4], int row, int col){
    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j = 0; j<col; j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of row -> " << i << " is : "<<sum<<endl;
    }
}

// TODO: Print col wise Sum 
void printColSum(int arr[][4], int row, int col){
    for(int i = 0; i<col; i++){
        int sum =0;
        for(int j =0; j<row; j++){
            sum+=arr[j][i];
        }
            cout<<"Sum of col -> " << i << " is : "<<sum<<endl;
    }
}

    // TODO: Print Diagonal
    void printDiagonal(int arr[][4], int row, int col){
        for(int i = 0; i<row; i++){
            cout<<arr[i][i]<<" ";
        }
    }


    // TODO: Print Reverse Diagonal
    void printReverseDiagonal(int arr[][4], int row, int col){
        for(int i = 0; i<row; i++){
            for(int j =0; j<col; j++){
                if((i+j) == row-1 ){
                    cout<<arr[i][j]<<" ";
                }
            }
        }
    }

void transposeMatrix(int arr[][4], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j =i; j<col; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    // Printing after Transpose
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[][4] = {
        {1,2,3,4},
        {10,20,30,40},
        {11,33,44,55},
        {0,90,88,77},
    };

    // cout<<sizeof(arr);

    // int row = 4; 
    // int col = 4;
    // int target = 88;

    // TODO: Linear Search
    // !Calling function 
    // bool ans  = findTarget(arr, row, col, target);
    // if(ans == true){
    //     cout<<"Target value Found !"<<endl;
    // }else{
    //     cout<<"Target value not Found !"<<endl;
    // }


    // TODO: Find maxNum
    // int maxNumber = findmaxNum(arr, row,col);
    // cout<<"Maximum Number is : "<<maxNumber<<endl;

     // TODO: Find MinNum
    // int minNumber = findminNum(arr, row,col);
    // cout<<"Minimum Number is : "<<minNumber<<endl;

    // TODO: Print Row Sum
    // printRowSum(arr, row, col);

    // cout<<endl;

    // TODO: Print col wise Sum 
    // printColSum(arr, row,col);

    // TODO: Print Diagonal
    // printDiagonal(arr,row,col);
    // cout<<endl;
    // printReverseDiagonal(arr,row,col);

    // TODO: Transpose Matrix 
    // int brr[4][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11},
    //     {12,13,14,15},
    // };
    // int row = 4; 
    // int col = 4; 
    // transposeMatrix(brr,row,col);


    

}
