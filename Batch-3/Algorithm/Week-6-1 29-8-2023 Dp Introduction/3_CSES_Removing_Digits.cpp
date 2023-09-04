/*
||-----------------------||
||  All Praise to Allah  ||
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/

//Link: https://cses.fi/problemset/result/6991627/
#include<bits/stdc++.h>
using namespace std;
int N = 1e6+5;

vector<int>dp(N,INT_MAX);
int solve(int n){
    if(n==0) return 0;

    if(dp[n]!=INT_MAX) return dp[n]; 

    vector<int>d;
    for(auto ch:to_string(n)){
        d.push_back(ch-'0');
    }

    for(auto val:d){
        dp[n] = min(dp[n],solve(n-val)+1);
    }

    return dp[n];
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n)<<endl;           
    return 0;
}
