/*
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/

#include <stdio.h>
int main()
{
    const int num = 10;

    int *num_ptr = &num;

    *num_ptr = 15;
    
    printf("%d", num);
    return 0;
}
