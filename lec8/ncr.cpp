#include<iostream>
using namespace std;

int factorial(int a) {
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;

}


int ncr(int n, int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int answ=num/denom;
    return answ;

}


int main () {
    int ans=ncr(8,2);
    cout<<ans;
}