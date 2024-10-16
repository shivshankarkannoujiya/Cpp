#include<iostream>


int main()
{
    int arr[5] = {1,3,5,6,7};

    /**
     * !We Know arr[2] = 5; but how ? 
     * TODO: Find using the formula 
    */

    int baseAddress = 104;
    int index = 2; 
    int elementSize = 4; // int --> 4 byte

    int address = baseAddress + (index * elementSize);
    
    std::cout<<"Value at index ->  "<< index << "is : "<<arr[index]<<std::endl;
    std::cout<<"Calculated address for arr [ "<< index << " ] is : "<< address << std::endl;

    return 0;
}