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

    while(str.find("EGYPT") != -1){
        str.replace(str.find("EGYPT"), 5," ");
    }        

    cout<<str<<endl;
              
    return 0;
}

