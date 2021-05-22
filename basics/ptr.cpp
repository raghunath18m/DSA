#include<iostream>
using namespace std;

int main(){
    
    // pointer is data type used to store address of other data types

    int a = 3;
    int* b = &a;

    // & --> Address of operator

    cout<<"address of a is "<<&a<<endl;
    cout<<"address of a is "<<b<<endl;

    // * --> Dereference operator (value at)

    cout<<"value at address b is "<<*b<<endl;


    // pointer in arrays

    // int arr[] = {1,2,3};
    //      |
    //     arr -->  address of first block

    //     x= arr;
    //     *(x)=1
    //     *(x+2)=2
    //     *(x+3)=3

    //     pointer arithmetic formula

    //     address(new)= address(current) + (i * size of data type

    
}