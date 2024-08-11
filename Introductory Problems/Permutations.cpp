#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;

    vector<int> v;

    //even nos.
    for(int j=2;j<=n;j+=2){
        v.push_back(j);
    }

    //odd nos.
    for(int i=1;i<=n;i+=2){
        v.push_back(i);
    }

    if(n<=3 && n!=1){
        cout<<"NO SOLUTION";
    }
    else if(n==1){
        cout<<1;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
}