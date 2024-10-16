#include<iostream>
#include<limits.h>



//TODO:  Function and Array [function to print Array]
void printArray(int a[], int size){
    for(int i = 0; i<size; i++){
        std::cout<<a[i]<<" ";
    }
}


// TODO: Write a function for linear Search
bool linearSearch(int arr[], int size, int target){

    for(int i = 0; i<size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}


// TODO: Count 0's and 1's in Array 
void countZerosOnes(int arr[], int size){

    int zeroCount  = 0; 
    int oneCount = 0;

    for( int i = 0; i < size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }else if(arr[i] == 1){
            oneCount++;
        }
    }
    std::cout<<"Total Zeros : "<<zeroCount<<std::endl;
    std::cout<<"Total Ones : "<<oneCount<<std::endl;
}

// TODO: Write a function to  Find Minimum number in an Array 
int minNumberInArray(int arr[], int size){
    int minNum = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i]<minNum){
            minNum = arr[i];
        }
    }
    return minNum;
}

// TODO: Write a function to  Find Maximum number in an Array 
int maxNumberInArray(int arr[], int size){
    int maxNum = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i]>maxNum){
            maxNum = arr[i];
        }
    }
    return maxNum;
}


// TODO: Write a function Reverse an Array 

void reverseArray(int arr[], int size){

    int left = 0;
    int right = size-1;

    while(left<=right){
        
        std::swap(arr[left],arr[right]);
        left++;
        right--;
    }

    // Printing Array
    std::cout<<"Reversed Array is : ";
    for(int i = 0; i < size;  i++){  
        std::cout<<arr[i]<<" ";
    }
}

// TODO: Print Extreme
void printExtreme(int arr[], int size){
    int left =0;
    int right = size-1;
    while(left<=right){
        if(left == right){
            std::cout<<arr[left];
        }else{
            std::cout<<arr[left]<<" ";
            std::cout<<arr[right]<<" ";
        }
        left++;
        right--;
    }
}


int main()
{
    // TODO: Create 10 size array , take input in taht array after that doubel up the value of that array
    // int arr[10];
    // int n = 10;

    // Taking Input
    // for(int i = 0; i<n; i++){
    //     std::cout<<"Enter value at index -> "<<i<<" : ";
    //     std::cin>>arr[i];
    // }

    // Doubling up 
    // for(int i = 0; i<n; i++){
    //     arr[i] = 2*arr[i];
    // }


    // Printing
    // std::cout<<"Printinf he doubled array : ";
    // for(int i = 0; i<n; i++){
        
    //     std::cout<<arr[i]<<" ";
    // }


    // TODO: 5 size array , take input , print total sum 
    // int a[5];
    // int n = 5;
    // for(int i = 0; i<n; i++){
    //     std::cout<<"Enter Element at index ->  " << i<< " : "; 
    //     std::cin>>a[i];
    // }

    // int sum = 0;
    // for(int i = 0; i < n; i++){
    //     sum+=a[i];
    // }
    // std::cout<<"Total Sum is : "<<sum<<std::endl;


    // TODO: Linear Search 
    // int arr[5] = {10,20,30,40,50};
    // int target = 50;
    // int n = 5; 

    // bool flag = 0;

    // for(int i = 0; i<n; i++){
    //     if(arr[i]==target){
    //         flag = 1;
    //         break;
    //     }
    // }

    // if(flag == 1){
    //     std::cout<<"Target is Found"<<std::endl;
    // }else{
    //     std::cout<<"Target is not Found"<<std::endl;
    // }


    // TODO: Function and array 
    // int arr[5] = {1,2,3,4,5};
    // int size = 5; 
    // printArray(arr , size);


    // TODO: Calling Linear Search function 
    // int arr[5] = {1,34,5,6,10};
    // int size =5; 
    // int target = 10; 

    // bool ans = linearSearch(arr, size, target);
    // if(ans == 1){
    //     std::cout<<"Target Found"<<std::endl;
    // }else{
    //     std::cout<<"Target not found"<<std::endl;
    // }

    // TODO: Count 0's and 1's
    // int arr[6] = {1,0,0,1,0,1};
    // int size = 6;
    // countZerosOnes(arr,size);


    // TODO: Min and Max Number in an Array 
    // int arr[5] = {9,8,4,3,1};
    // int size = 5;
    // int minNumber  = minNumberInArray(arr,size);
    // std::cout<<"Minimum Number is : "<<minNumber<<std::endl;
    // int maxNumber = maxNumberInArray(arr,size);
    // std::cout<<"Maximum number in array is : "<<maxNumber<<std::endl;
    

    // TODO: Reverse an Array 
    // int arr[5] = {10,20,30,40,50};
    // int size = 5;

    // std::cout<<"Printing Array Before Reverse : ";
    // for(int i = 0; i<size; i++){
    //     std::cout<<arr[i]<<" ";
    // }
    // std::cout<<std::endl;
    // reverseArray(arr,size);


    // TODO: Print Extreme
    // int arr[5] = {10,20,30,40,50};
    // int size = 5;
    // printExtreme(arr,size);

    
    return 0;

}