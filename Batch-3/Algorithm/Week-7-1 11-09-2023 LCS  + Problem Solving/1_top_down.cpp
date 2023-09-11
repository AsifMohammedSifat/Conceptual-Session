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
#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int lcs(string s,int n,string e,int m){
    if(n==0||m==0) return 0;

    if(dp[n][m]!=-1){
        return dp[n][m];
    }

    if(s[n-1]==e[n-1]){
        return dp[n][m] = lcs(s,n-1,e,m-1)+1;
    }else{
        int op1 = lcs(s,n-1,e,m);
        int op2 = lcs(s,n,e,m-1);
        return dp[n][m] = max(op1,op2);
    }

}

int main(){
    string s,e;
    cin>>s>>e;
    memset(dp,-1,sizeof(dp));
    cout<<lcs(s,s.size(),e,e.size())<<endl;


              
    return 0;
}
