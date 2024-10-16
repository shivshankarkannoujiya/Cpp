#include<iostream>
using namespace std;



    // TODO: Print 2D Array 

    void printArray(int a[][3], int row, int col){
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    // TODO: Print 2D array col-wise
    void printArrayColWise(int arr[][3],  int row, int col){
        for(int i =0; i<col; i++){
            for(int j =0; j<row; j++){
                cout<<arr[j][i]<< " ";
            }
            cout<<endl;
        }
    }


int main()
{
    // !ERROR : At least column size dena padega 
    // int a[2][] = {
    //     {1,2,3},
    //     {2,4,5},
    // };

    int a[2][3] = {
        {1,2,3},
        {2,4,5},
    };

    int row = 2;
    int col = 3;

    // TODO: Print 2D Array 
    printArray(a, row, col);
    cout<<endl;
    printArrayColWise(a, row, col);
}