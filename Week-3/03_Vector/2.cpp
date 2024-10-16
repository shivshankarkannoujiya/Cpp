#include<iostream>
#include<vector>
using namespace std;


int main()
{

    // TODO: 2D Vector
    // vector< vector<int> >arr(5,vector<int>(10,0));

    // Printing 2D vector
    // for(int i = 0; i<arr.size(); i++){
    //     for(int j = 0; j<arr[i].size(); j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }



    // TODO: Jagged Array 
    vector < vector<int> >brr;
    vector<int>v1(5,0);
    vector<int>v2(6,1);
    vector<int>v3(7,2);
    vector<int>v4(8,3);
    vector<int>v5(9,4);

    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);
    brr.push_back(v4);
    brr.push_back(v5);

    for(int i = 0; i<brr.size(); i++){
        for(int j = 0; j<brr[i].size(); j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}

