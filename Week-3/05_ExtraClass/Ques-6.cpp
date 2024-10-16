#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int>>& mat){
    int n = mat.size();

    // Step - 1
    // Transpose
    for(int i = 0; i<n; i++){
        for(int j = i; j<mat[i].size(); j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    // Step - 2
    // Reverse Rows
    for(int i  = 0; i<n; i++){
        reverse(mat[i].begin(),mat[i].end());
    }
}


void printMatrix(vector<vector<int>>& mat){
    for(int i = 0; i<mat.size(); i++){
        for(int j = 0; j<mat[i].size(); j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<vector<int>>mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    rotate(mat);
    printMatrix(mat);


}