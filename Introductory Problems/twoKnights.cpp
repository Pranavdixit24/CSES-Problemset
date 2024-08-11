#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll i,total_combinations,attacking_ways;
    int n;
    cin>>n;

    for(i=1;i<=n;i++){
        total_combinations=((i*i)*(i*i-1))/2;
        attacking_ways=4*((i-1)*(i-2));
        cout<<total_combinations-attacking_ways<<endl;
    }
}