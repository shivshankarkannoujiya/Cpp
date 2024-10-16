#include <iostream>
using namespace std;


void getAllSubsequences(string str, string output, int index){
    if(index >= str.length()){
        cout<<"-> "<<output<<endl;
        return;
    }

    char currentChar = str[index];

    //include
    output.push_back(currentChar);
    getAllSubsequences(str, output, index + 1);

    // Exclude
    output.pop_back();
    getAllSubsequences(str,output,index + 1);
}


//! Find Subsequesces
int main()
{
    string str = "abc";
    string output = "";
    int index = 0;
    getAllSubsequences(str, output, index);
}