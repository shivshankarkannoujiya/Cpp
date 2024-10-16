#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target){

    int n = mat.size();
    int m = mat[0].size();
    int low = 0; 
    int high = (n * m) - 1;

    while(low <= high){
        int mid = low + (high - low)/2;
        int row = mid / m;
        int col = mid % m;
        
        if(mat[row][col] == target){
            return true;
        }else if(mat[row][col] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return false;
}

int main()
{
    vector<vector<int>>mat = {
        {3,4,7,9},
        {12,13,16,18},
        {20,21,23,29},
    };

    int target;
    cout<<"Enter Target you want to Search : ";
    cin>>target;

    bool ans = searchMatrix(mat,target);
    // cout<<"Ans is : "<<ans<<endl;

    if(ans == true){
        cout<<"Target Found !"<<endl;
    }else{
        cout<<"Target Not Found !"<<endl;
    }
}