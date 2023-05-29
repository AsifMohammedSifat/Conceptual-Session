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
    string str;
    getline(cin,str);

    int count = 1;
    for(int i=1;i<str.size()-1;i++){
        if(!(str[i]>='A'&& str[i]<='z') && (str[i+1])>='A'&& str[i+1]<='z'){
            count++;
        }
        else{
            continue;
        }
    }

    cout<<count<<endl;
              
    return 0;
}
