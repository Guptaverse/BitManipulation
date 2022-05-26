// We want to find maximum xor between L and R 
/*
Question Link : https://www.hackerrank.com/challenges/maximizing-xor/problem
Article to understand approach : https://www.geeksforgeeks.org/maximum-xor-value-of-a-pair-from-a-range/
*/

#include<bits/stdc++.h>
using namespace std;

int maxXor_in_LR(int L,int R){
    int lr = L^R; // limit 
    int msbPos =0;
    while(lr){
        msbPos++; // calculating the pos of MSB 
        lr >>=1;
    }
    return (pow(2,msbPos)-1);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int L,R;
    cin>>L>>R;
    cout<<maxXor_in_LR(L,R)<<endl;
    return 0;
}