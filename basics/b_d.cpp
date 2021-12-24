// decimal to binary

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n = 110;
    int i =0;
    int ans=0;
    while(n>0){
        int bit = n % 10;
        ans = ans+bit*(pow(2,i));
        i++;
        n=n/10;
    }
    cout<<ans;
}