// We want to calculate no of set bits between 10 to 15 inclusively 
/*
10 -> 1010 (2)
11-> 1011 (3)
12-> 1100 (2)
13-> 1101 (3)
14 -> 1110 (3)
15 -> 1111 (4)

total : 17
*/

#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    int ct =0;
    while(n){
        ct += n&1;
        n = n>>1;
    }
    return ct;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int total = 0;

    // Approach 1 : Not recommended looping till all elements

    // for(int i =n;i<=m;i++){
    //     total += countSetBits(i);
    // }

    // Approach 2 : check if the no is even and is less than m
    for(int i = n;i<=m;i++){
        if((i&1)==0 && i<m){  // if ith bit is zero means even and for even we compute the set bit for eg 10 has 2 set bit so we will not compute for 11 we directly
            total += 2* countSetBits(i)+1; // twice the no of bits in 10 and add 1 to it 2*(2) +1
            i++; //jump to next even
            continue;
        }
        total += countSetBits(i); // if odd came in the start or  10 11 12 13 14 for 14 which will left if we jump twice 
    }




    cout<<"Total Set bits between n->m : "<<total<<endl;
    return 0;
}