#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    int no_of_subsequences = (1<<n)-1;
    vector<string>ans;
    ans.push_back("#");
    for(int i =1;i<=no_of_subsequences;i++){
        int temp =i,j=0;
        string t="";
        while(temp>0){
            if(temp&1){
            t +=s[j];
            }
            j++;
            temp>>=1;
        }
        ans.push_back(t);
    }
    for(auto x:ans) cout<<x<<" ";
    return 0;
}