/*
Question link : https://www.codechef.com/submit-v2/ANDSUBAR?tab=statement
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int largestpow(int n){
    int p =1;
    while(p*2<=n){
        p*=2;
    }
    return p;
}

void solver(){
    ll n;
    cin>>n;
    ll lp = largestpow(n);
    ll seclp = lp>>1;
    ll ans1 = lp-seclp;
    ll ans2 = n-lp+1;
    cout<<max(ans1,ans2)<<endl; 
}

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