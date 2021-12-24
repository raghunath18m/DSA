// intersection of 2 arrays

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1,2,2,2,3,4};
    int arr2[] = {2,2,3,3};

    int i = 0;
    int j =0 ;

    while(i<6 && j<4){
        if(arr1[i]<arr2[j]){
            i++;
        }
        if(arr1[i]==arr2[j]){
            cout<<arr1[i];
            i++;
            j++;
        }
        if(arr1[i]>arr2[j]){
            j++;
        }
    }
    
    return 0;
}