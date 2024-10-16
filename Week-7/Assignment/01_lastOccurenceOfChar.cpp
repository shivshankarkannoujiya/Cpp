#include<iostream>
using namespace std;


// Left to Right
void lastOccurenceOfCharLTR(string &str, char targetChar, int index, int &ans){

    if(index >= str.size()){
        return;
    }

    if(str[index] == targetChar){
        ans = index;
    }

    lastOccurenceOfCharLTR(str, targetChar, index + 1, ans);
}


// Right to Left
void lastOccurnceOfCharRTL(string &str, char targetChar, int index, int &ans){
    if(index < 0){
        return;
    }

    if(str[index] == targetChar){
        ans  = index;
        return;
    }

    lastOccurnceOfCharRTL(str, targetChar, index - 1, ans);
}

int main()
{
    cout<<"Enter String: ";
    string s;
    cin>>s;

    cout<<"Enter Char: ";
    char targetChar;
    cin>>targetChar;

    int ans = -1;
    // int index = 0;

    // lastOccurenceOfCharLTR(s,targetChar, index, ans);
    // cout<<"last index of char -> "<< targetChar << " is: "<<ans<<endl;

    int index = s.size() - 1;
    lastOccurnceOfCharRTL(s, targetChar, index, ans);
    cout<<"last index of char -> "<< targetChar << " is: "<<ans<<endl;
}