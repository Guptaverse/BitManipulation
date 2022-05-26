#include<bits/stdc++.h>
#define ll long long
using namespace std;





void solver(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i =0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>u(n);
    for(ll i =0;i<n;i++){
        cin>>u[i];
    }
    map<ll,ll>m;
    for(int i =0;i<n;i++){
        m[v[i]^u[i]]++;
    }
    int ans =0;
    for(auto x:m){
        ans+=((x.second-1)*x.second)/2;
    }
    cout<<ans<<endl;

    // for(auto x:v) cout<<x<<" ";
    // cout<<endl;
    // for(auto x:u) cout<<x<<" ";
    // cout<<endl;
}
// void solver(){
//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     for(ll i =0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<ll>u(n);
//     for(ll i =0;i<n;i++){
//         cin>>u[i];
//     }
//     vector<ll>temp1;
//     vector<ll>temp2;
//     for(ll i =0;i<n;i++){
//         for(ll j =0;j<n && i!=j;j++){
//             temp1.push_back(v[i]^v[j]);
//         }
//     }
//     // for(auto x:temp1) cout<<x<<" ";
//     // cout<<endl;
//     for(ll i =0;i<n;i++){
//         for(ll j =0;j<n && i!=j;j++){
//             temp2.push_back(u[i]^u[j]);
//         }
//     }
//     // for(auto x:temp2) cout<<x<<" ";
//     // cout<<endl;
//     ll ct =0;
//     ll k = (n*(n-1))/2;
//     for(ll i =0;i<k;i++){
//         if(temp1[i]==temp2[i]){
//             ct++;
//             // cout<<"temp values : "<<temp1[i]<<" "<<temp2[i]<<endl;
//         } 
//     }
//     cout<<ct<<endl;


//     // for(auto x:v) cout<<x<<" ";
//     // cout<<endl;
//     // for(auto x:u) cout<<x<<" ";
//     // cout<<endl;
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solver();
    }
    return 0;
}