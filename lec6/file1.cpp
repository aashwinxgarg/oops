#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n=-6,ans=0;
    int ok=abs(n);
    // for(int i=0;n!=0;i++){
    //     int bit=ok&1;
    //     ans=ans+(pow(10,i)*bit);
    //     ok=ok>>1;
    // }
    int i = 1;
    while(ok>0)
    {
        int k = ok % 2;
        ans = ans + k*i;
        i=i*10;
        ok=ok/2;
    }
    cout<<ans;
    
}