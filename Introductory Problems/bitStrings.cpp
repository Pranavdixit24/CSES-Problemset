#include<iostream>
using namespace std;
#define ll long long

ll pow(ll b,ll p,ll mod){
    ll ans=1;
    for(ll i=0;i<p;i++){
        ans = ans * b % mod;
    }
    return ans;
}

int main(){
    ll n;
    cin>> n;
    cout<<pow(2,n,1e9+7);

}