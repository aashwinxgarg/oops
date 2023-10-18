#include<iostream>
using namespace std;
int main() {
    int n=9;
    bool flag=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = false;
        }
    }
    cout<<flag;
}