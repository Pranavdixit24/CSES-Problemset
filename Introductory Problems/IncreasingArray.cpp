#include<bits/stdc++.h>
using namespace std;
#define ll long long

//approach 1
// int main(){
//     int n;
//     cin>>n;
//     int mx=0;
//     ll ans=0;
    
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         mx=max(x,mx);
//         ans+=mx-x;
//     }
//     cout<<ans;
// }

//approach 2

int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>> v[i];
    }
    ll res = 0;
    for(int i=1;i<n;i++){
        if(v[i] >= v[i-1]) continue;
        res += abs(v[i]-v[i-1]);
        v[i] = v[i-1];
    }
    cout<<res<<endl;
    return 0;
}