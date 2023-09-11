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
//link : https://leetcode.com/problems/delete-operation-for-two-strings/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[505][505];
    int lcs(string s,int n,string e,int m){
    if(n==0||m==0) return 0;

    if(dp[n][m]!=-1){
        return dp[n][m];
    }

    if(s[n-1]==e[m-1]){
        return dp[n][m] = lcs(s,n-1,e,m-1)+1;
    }else{
        int op1 = lcs(s,n-1,e,m);
        int op2 = lcs(s,n,e,m-1);
        return dp[n][m] = max(op1,op2);
    }

}

    int minDistance(string word1, string word2) {
    string s = word1,e = word2;    
    memset(dp,-1,sizeof(dp));
    return (word1.size()+word2.size())-(lcs(s,s.size(),e,e.size())*2);
        
    }
};

int main(){
            
              
    return 0;
}
