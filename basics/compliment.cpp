// compliment of base 10 integer

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mask=0;

    if (n==0){
        return 1;
    }

    while(n>0){
        mask=(mask<<1) | 1;
        n = n >> 1;
    }
    int ans=(~n)& mask;
    return ans;
    
}