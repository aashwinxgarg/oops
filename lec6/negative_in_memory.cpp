#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n=5;
    int k=abs(n);
    int ans=0,i=1;
    while(k!=0){
        int a=k%2;
        ans=ans+i*a;
        i=i*10;
        k=k/2;
    }
        
        int j=1;
        int an=0;
    while(ans!=0){
        // cout<<ans<<endl;
        int a=ans%10;
        if(a&1){
            an=an+j*0;
            // cout<<"1";
        }
        else{
            an=an+j*1;
            // cout<<"0";
        }
        j=j*10;
        ans=ans/10;
        // cout<<an<<endl;
    }
    cout<<an;
    
}