// We want to find those 2 non repeating no's in array 
/*
Question Link : hhttps://leetcode.com/problems/single-number-iii/

*/

#include<bits/stdc++.h>
using namespace std;

int counPos_setBit(int n){
    int ct=0;
    int k=0;
    while(k!=1){
        // cout<<"hi";
        if(n&1){
            // cout<<"hi";
            k=1;
            break;
        } 
        // cout<<ct<<" ";
        ct++;
        n>>=1;
    }
    // cout<<ct<<endl;
    return ct;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v) cin>>x;
    int res = 0;
    for(auto x:v){
        res^=x;
    }
    int resc = res;
    int pos = counPos_setBit(resc);
    int first =0;
    for(auto x:v){
        if(x&(1<<pos)) first^=x,cout<<"first :"<<first<<" , x :"<<x<<endl;
    }
    cout<<endl;
    int sec = res^first;
    cout<<first<<" "<<sec<<endl;
    
    return 0;
}


// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(auto &x:v) cin>>x;
//     int res =0;
//     for(int i =0;i<n;i++){
//         res^=v[i];
//     }
//     int tempres = res,index =0;
//     while(tempres>0){
//         if(tempres&1){
//             break;
//         }
//         index++;
//         tempres = tempres>>1;
//     }
//     int mask = (1<<index);
//     vector<int> temparr;
//     for(int i =0;i<n;i++){
//         if(v[i]&mask) temparr.push_back(v[i]);
//     }
//     int a =0;
//     for(auto x:temparr){
//         a^=x;
//     }
//     int b = res^a;
//     if(a>b) cout<<b<<" "<<a<<endl;
//     else cout<<a<<" "<<b<<endl;
//     return 0;
    
// }