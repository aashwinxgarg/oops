#include<iostream>
using namespace std;
int main() {
    int n=6;
    int ans=0;
    for(int i=0;n!=0;i++){
        int bit=n&1;
        n=n>>1;
        ans=ans+(pow(10,i)*bit);
    }
    cout<<ans;
}