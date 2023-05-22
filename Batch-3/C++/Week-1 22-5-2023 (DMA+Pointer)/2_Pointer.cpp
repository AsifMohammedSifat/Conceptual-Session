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

    //introduction + example
    int num = 10;
    int* num_ptr = &num;
    int** num_ptr_ptr = &num_ptr;

    cout<<num_ptr<<endl;        
    cout<<*num_ptr<<endl;   

    
    cout<<num_ptr_ptr<<endl;        
    cout<<*num_ptr_ptr<<endl;      
    cout<<**num_ptr_ptr<<endl;      
              
    return 0;
}
