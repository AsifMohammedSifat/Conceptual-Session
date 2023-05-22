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
    const int rahim = 15;

    int* karim = &rahim;

    *karim = 0;

    printf("%d",rahim);

    return 0;
}
