#include<iostream>
using namespace std;
int setbit(int a){
    int count=0;
    for(int i=0;a!=0;i++){
        int bit=a&1;
        if(bit==1){
            count++;
        }
        a=a>>1;
    }
    return count;
}
int main() {
    int a=2,b=3;
    int ans=setbit(a);
    int answ =setbit(b);
    cout<<ans+answ<<endl;

}