#include<iostream>
using namespace std;


int main()
{
    // creation
    // string name;

    // input 
    // cin>>name;
    // getline(cin,name);

    // print 
    // cout<<"Printing : "<<name<<endl;


    // string name;
    // cout<<"Enter string : ";
    // cin>>name;

    // string temp = "";

    // 1.
    // cout<<"Lenth of String is : "<<name.length()<<endl;
    // cout<<"String isEmpty : "<<temp.empty()<<endl;
    // cout<<"char at index : "<<name.at(0)<<endl;
    // cout<<"First Char of String is : "<<name.front()<<endl;
    // cout<<"last Char of String is : "<<name.back()<<endl;

    // string str1 = "Abhi ";
    // string str2 = "Kannoujiya";

    // cout<<str1<<endl;
    // cout<<str2<<endl;

    //! Appending
    // str1.append(str2);

    // cout<<str1<<endl;
    // cout<<str2<<endl;

    // string desc = "This is a Car";
    // desc.erase(4,3);
    // cout<<desc<<endl;


    // string str1 = "Abhi Kumar";
    // string str2 = " Ji";
    // str1.insert(4,str2);
    // cout<<"Printing : "<<str1<<endl;


    // string str1 = "Ramesh";
    // str1.push_back('A');
    // cout<<str1<<endl;
    // str1.pop_back();
    // cout<<str1<<endl;


    // string str1 = "This is a Car";
    // string str2 = "Car";

    // if (str1.find(str2) == string::npos){
    //     cout<<"Not Found"<<endl;
    // }else{
    //     cout<<"Found"<<endl;
    // }
    

    // string str1 = "Car";
    // string str2 = "Car";

    // cout<<str1.compare(str2)<<endl;


    string str1 = "This is a Car";
    string str2 = str1.substr(4,11);
    cout<<str2<<endl;
    
}