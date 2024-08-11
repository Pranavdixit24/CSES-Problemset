#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin>>s;

    ll ans=0,c=0;
    char l='A';
    for(char d:s){
        if(d==l){
            c++;
            ans=max(ans,c);
        }
        else{
            l=d;
            c=1;
        }
    }
    cout<<ans;
}