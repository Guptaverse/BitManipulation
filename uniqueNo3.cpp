// We have to find odd one out from thricely repeating nos of array
/*
Question Link : https://leetcode.com/problems/single-number-ii/
Must : https://www.youtube.com/watch?v=1XWykHp7rys&list=PLX0iyO9CrCF1-4je7G0JMSr_50I0J2K3Z&index=5
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v) cin>>x;
    vector<int>count(32,0);
    
    for(int i =0;i<n;i++){
        int number = v[i];
        int j =0;
        while(number>0){
            count[j] +=(number&1);
            j++;
            number = number>>1;
        }
    }
    int ans =0;
    int pos = 1;
    for(int i =0;i<32;i++){
        count[i]%=2;
        ans +=count[i]*pos;
        pos = pos<<1;
    }
    cout<<"unique No is : "<<ans<<endl;

    return 0;
}


