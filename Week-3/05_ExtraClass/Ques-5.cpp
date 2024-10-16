#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

vector<int> rowAndMaximumOnes(vector< vector<int> >& mat){

    vector<int>ans;
    int oneCount = INT_MIN;
    int rowNumber = -1;

    for(int i = 0; i<mat.size(); i++){
        int count = 0;
        for(int j = 0; j<mat[i].size(); j++){
            if(mat[i][j] == 1){
                count++;
            }
        }

        // Compare count and oneCount and update 
        if(count > oneCount){
            oneCount = count;
            rowNumber = i;
        }
    }

        ans.push_back(rowNumber);
        ans.push_back(oneCount); 
        return ans;
}

int main()
{
    vector<vector<int> >nums = {
        {1,0,0,0},
        {0,0,0,1},
        {1,1,1,0},
        {1,0,0,1}
    };

    // calling function 
    vector<int>rowNumAndMaxOnes = rowAndMaximumOnes(nums);
    
    // Printing the ans 
    for(int i = 0; i<rowNumAndMaxOnes.size(); i++){
        cout<<rowNumAndMaxOnes[i]<<" ";
    }
}