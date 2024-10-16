#include <iostream>
#include<vector>
using namespace std;

void insertIntoVector(int number, vector<int> &ans){
    if(number == 0){
        return;
    }

    int digit = number % 10;
    number = number / 10;

    insertIntoVector(number, ans);
    ans.push_back(digit);
}

void printVector(vector<int> &v){
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
    int number = 12345;
    vector<int>ans;
    insertIntoVector(number, ans);
    printVector(ans);
}