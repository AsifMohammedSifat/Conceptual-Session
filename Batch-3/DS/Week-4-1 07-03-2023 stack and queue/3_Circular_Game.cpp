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
//leetcode problem link: https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++) q.push(i);
        int c = k;
        while(q.size()>1){
            int a = q.front();
            q.pop();
            --c;
            if(c==0){
                c=k;
            }else{
                q.push(a);
            }
        }
        return q.front();
    }
};
int main(){
            
              
    return 0;
}
