#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int changeCoin(vector<int>& coin, int amount){

    if(amount == 0){
        return 0;
    }
    
    int minAns = INT_MAX;
    int ans = INT_MAX;

    for(int i = 0; i < coin.size(); i++){
        int currCoin = coin[i];
        if(currCoin <= amount){
            int recAns = changeCoin(coin, amount - currCoin);
            if(recAns != INT_MAX){
                ans = 1 + recAns;
                minAns = min(minAns, ans);
            }
        }
    }
    return minAns;
}

int main()
{
    vector<int> coin{5,6,8};
    int amount = 11;
    int ans = changeCoin(coin, amount);
    cout<<"Ans is: "<<ans<<endl;
}