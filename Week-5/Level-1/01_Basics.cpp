#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int getLength(char ch[], int size){
    int length = 0;
    int i = 0; 
    while(i < size && ch[i] != '\0'){
        length++;
        i++;
    }
    
    return length;
}


void reverseString(char ch[], int len){
    int i = 0; 
    int j = len - 1;

    while(i <= j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

void toUpperCase(char ch[]){
    int index = 0;
    while(ch[index] != '\0'){
        
        char currCharacter = ch[index];
        if (currCharacter >= 'a' && currCharacter <= 'z')
        {
            ch[index] = currCharacter - 'a' + 'A';
        }
        index++;
    }
}


void replaceCharacter(char ch[]){
    int index = 0;
    while (ch[index] != '\0'){
        char curr = ch[index];
        if (curr == '@'){
            ch[index] = ' ';
        }
        index++;
    }
}


bool isPalindrome(char ch[], int len){
    int i = 0;
    int j = len - 1;

    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    // Char array creation
    // char ch[5];
    // cin>>ch;
    // cout<<"Printing value of ch : "<<ch<<endl;




    // char ch[10];
    // cin>>ch;

    // printing all values 
    // for(int i = 0; i<10; i++){
    //     cout<<ch[i]<<" ";
    // }
    // cout<<endl;

    // char temp = ch[4];
    // int value = (int)temp;
    // cout<<"Printing value : "<<value<<endl;


    // char ch[100];
    // cout<<"Enter values : ";
    // cin>>ch;
    // cin.getline(ch,100);
    // cout<<"Printing : "<<ch<<endl;




    // char ch[100];
    // int size = 100;
    // cout<<"Enter Chars : ";
    // cin.getline(ch,100);
    // int length = getLength(ch,size);
    // cout<<"Total Length : "<<length<<endl;
    // cout<<"Length is : "<<strlen(ch);


    // char ch[20];
    // cout<<"Enter String : ";
    // cin>>ch;
    // int len = strlen(ch);
    // cout<<"Before : "<<ch<<endl;
    // reverseString(ch,len);
    // cout<<"After : "<<ch<<endl;

    // char ch[100];
    // cout<<"Enter the String : ";
    // cin.getline(ch,100);

    // cout<<"Before : "<<ch<<endl;
    // toUpperCase(ch);
    // cout<<"After : "<<ch<<endl;

    // replace Charater
    // cout<<"Before : "<<ch<<endl; 
    // replaceCharacter(ch);
    // cout<<"After : "<<ch<<endl; 



    // char ch[100];
    // int len = strlen(ch);
    // cout<<"Enter the String : ";
    // cin.getline(ch,100);
    // bool ans = isPalindrome(ch,len);

    // if (ans == true){
    //     cout<<"Valid Plindrome"<<endl;
    // }else{
    //     cout<<"InValid Plindrome"<<endl;
    // }
    
}