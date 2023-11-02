#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n=-8;
    int k=abs(n);
    int i=1;
    int ans=0;
    while(k!=0){
        int a=k%2;
        ans=ans+i*a;
        i=i*10;
        k=k/2;
    }
    cout<<ans;
}