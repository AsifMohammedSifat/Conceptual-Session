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
#define ll long long int 
#define ull unsigned long long int 
#define nl '\n' 
using namespace std;


class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};



                    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node a(5),b(10);
    // a.val = 5;
    // b.val = 10;

    a.next = &b;
    // b.next = NULL;

    cout<<a.val<<" "<<b.val<<nl;                  
            
              
    return 0;
}
