// Book allocation problem :
// divide the number of pages of n books among k students near evenly in contiguous fashion such that the maximum number of pages of the student is minimum
// here key is to find the search space from required ans

#include <bits/stdc++.h>
using namespace std;


bool ispossible(int arr[], int size, int mid){
    int students=2;
    int count=1;
    int pageSum = 0;
    for(int i=0;i<size;i++){
        if(pageSum+arr[i]>mid){
            pageSum=arr[i];
            count++;
            if(count>students || arr[i]>mid){
                return false;
            }
        }
        else{
            pageSum+=arr[i];
        }
    }
    return true;
}

int sum(int arr[], int size){
    int total = 0;
    for(int i=0;i<size;i++){
        total+=arr[i];
    }
    return total;
}


int main(){
    int books[]={10,20,30,40};
    int start = 0;
    int end = sum(books,4);
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end) {

        if(start == end) {
            return start;
            break;
        }

        if(ispossible(books, 4, mid)) {
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }

    cout<<ans;
    return 0;
}