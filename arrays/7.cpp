#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){
        int sum=0;
        int maxsum=arr[0];
        for (int i=0; i<n; i++) {
            sum+=arr[i];
            if (sum>maxsum) maxsum=sum;;
            if (sum<0) sum=0;
        }
        
        return maxsum;
    }



int main(){
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubarraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}