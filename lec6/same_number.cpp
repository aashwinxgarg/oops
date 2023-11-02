#include<iostream>
using namespace std;
int main() {
    int n=123,ans=0;
    for(int i=0;n!=0;i++){
        int digit=n%10;
        ans=ans+(pow(10,i)*digit);
        n/=10;
    }
    cout<<ans;
}