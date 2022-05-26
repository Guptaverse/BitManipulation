// We have to find the index of Lucky no 
/*
Question Link : https://codeforces.com/problemset/problem/535/B
Lucky no array will be : 4,7,44,47,74,77,.....
must watch explaination : https://www.youtube.com/watch?v=-D5Hb5MoiM4&list=PLX0iyO9CrCF1-4je7G0JMSr_50I0J2K3Z&index=4
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin>>n;    
    string s = to_string(n);
    int len = s.length();
    ll ans = (1<<len)-2; // 2 pow len -2; 
    for(int i=len-1,j =0;i>=0;i--,j++){
        if(s[i]=='7') ans +=(1<<j);
    }
    cout<<ans+1<<endl;

    return 0;
}


