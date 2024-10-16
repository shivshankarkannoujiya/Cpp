#include <iostream>
using namespace std;

void reverseString(string &str, int start, int end){
    if(start >= end){
        return;
    }

    swap(str[start], str[end]);

    reverseString(str, start + 1, end - 1);
}

int main()
{
    string str;
    cin>>str;

    int start = 0;
    int end = str.size() - 1;

    reverseString(str, start, end);

    // We have send string by refrence now ye revese ho chuka hoga print it
    cout<<str<<endl;
}