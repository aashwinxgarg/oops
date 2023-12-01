#include<iostream>
using namespace std;

int fib(int a){
    int f0=0,f1=1,ans=0;
    for(int i=1;i<=a-2;i++){
        ans=f0+f1;
        f0=f1;
        f1=ans;
    }
    return ans;
}

int main() {
    cout<<fib(8);
}