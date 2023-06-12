/*
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int sum = 0;

    for(int i=1;i<=n;i++){
        sum = sum + i;
    }  

    cout<<sum<<endl;            
    return 0;
}
