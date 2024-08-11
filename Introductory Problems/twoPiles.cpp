#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        if(b>a){
            swap(a,b);
        }
        if(a > 2*b || (a+b) %3 != 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}