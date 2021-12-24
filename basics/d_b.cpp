// decimal to binary
// #include<bitset> to store signed integer
// bitset<32> x(n); x returns stored decimal number
// right shift >> n/2;
// leftshift << n*2
// reverse flow ans = (ans*10) + digit
// same flow ans = ans+(bit*(pow(10,i)))

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =0;
    int ans=0;
    while(n>0){
        int bit = n & 1;
        ans = ans+(bit*(pow(10,i)));
        i++;
        n=n>>1;
    }
    cout<<ans;
}