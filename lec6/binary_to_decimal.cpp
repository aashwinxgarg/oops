#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n=1101;
    int i=0;
    int ans=0;
    while(n!=0){
        int a=n%10;
        ans=ans+a*pow(2,i);
        i++;
        n/=10;
    }
    cout<<ans<<endl;
    // cout<<ans;
}