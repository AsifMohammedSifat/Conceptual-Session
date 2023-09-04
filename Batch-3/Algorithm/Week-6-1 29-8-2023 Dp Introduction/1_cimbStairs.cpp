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
//Link: https://leetcode.com/problems/climbing-stairs/description/

#include<bits/stdc++.h>
using namespace std;

// General Approach
class Solution {
public:
    
    int solve(int n){        
        if(n<=2) return n;
        return solve(n-1)+solve(n-2); 
    }
    int climbStairs(int n) {
        return solve(n);       
    }
};

// Memoization
class Solution {
public:
    
    int solve(int n,vector<int>&dp){        
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = solve(n-1,dp)+solve(n-2,dp); 
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);   
        return solve(n,dp);       
    }
};

//tabulation
class Solution {
public:
    
    int solve(int n,vector<int>&dp){      
        if(n<=2) return n;  
        
        dp[1] = 1;
        dp[2] = 2;

        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }

    int climbStairs(int n) {
        vector<int>dp(n+1);   
        return solve(n,dp);       
    }
};

int main(){
            
              
    return 0;
}
