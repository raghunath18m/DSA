#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[7]={0,2,1,0,2,2,0};
    int n=7;
    int left=0, center=0, right=n-1;

    while(center<=right){
        if(arr[center]==0){
            swap(arr[left], arr[center]);
            left++;
            center++;
            continue;
        }
        if(arr[center]==1){
            center++;
            continue;
        }
        if(arr[center]==2){
            swap(arr[center], arr[right]);
            right--;
            continue;
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}