#include<iostream>
using namespace std;
bool isprime(int a){
    bool flag=true;
    for(int i=2;i<a;i++){
        if(a%i==0){
            flag=false;
        }
    }
    return flag;
}
int main() {
    cout<<isprime(111);
}