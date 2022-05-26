#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int ct =0;
    while(num){
        if(num&1) ct++;
        num=num>>1;
    }
    cout<<"No of set bit in num : "<<ct;
}