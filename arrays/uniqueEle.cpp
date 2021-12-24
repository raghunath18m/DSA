// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.

// Using XOR, a^a=0, a^0=a

#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[7]= {2,3,5,6,3,6,2};
    int ans = 0;
    for (int i = 0; i < 7; i++)
    {
        ans = ans^arr[i];
        i++;
    }
    cout<<ans;
    
}