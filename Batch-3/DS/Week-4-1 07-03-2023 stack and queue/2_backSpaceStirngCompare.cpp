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

class Solution {
public:
    stack<char> ss,tt;
    bool backspaceCompare(string s, string t) {
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' && !ss.empty()) ss.pop();
            else if(s[i]!='#') ss.push(s[i]);
        }

        for(int i=0;i<t.size();i++){
            if(t[i]=='#'  && !tt.empty()) tt.pop();
            else if(t[i]!='#') tt.push(t[i]);
        }

        if(ss.size()!=tt.size()) return false;
        else{
            while(!ss.empty()){
                char sV = ss.top();
                ss.pop();
                char tV = tt.top();
                tt.pop();
                if(sV!=tV) return false;
            }
            return true;
        }
        
    }
};

int main(){
            
              
    return 0;
}
