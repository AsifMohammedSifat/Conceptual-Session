/*
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    // variable declearaiton
    int *a = new int; // syntax
    *a = 10;
    cout << *a << endl;

    delete a;

    //array declearation
    int* arr = new int[2];

    arr[0] = 5;
    arr[1] = 10;

    cout<<arr[0]<<" "<<arr[1]<<endl;

    delete [] arr;

    return 0;
}
