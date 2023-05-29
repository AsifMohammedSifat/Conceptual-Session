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

bool isValid(string word){
    for(char c:word){
        if(isalpha(c)){
            return true;
        }
    }
    return false;
}

int main(){
    string str;
    getline(cin,str);

    stringstream ss(str);
    string word;

    int count = 0;

    while(ss>>word){
        if(isValid(word)){
            count++;
        }   
    }   

    cout<<count<<endl;  
              
    return 0;
}
