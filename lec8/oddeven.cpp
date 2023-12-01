#include<iostream>
using namespace std;
void oddeve() {
    int a;
    cin>>a;
    if(a%2==0){
        cout<<a<<" is even";
    }
    else{
        cout<<a<<" is odd";
    }
    
}
int main() {
    oddeve();
}