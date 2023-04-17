/**
 *                       2_Array_Input_Output.c
 * 1)Manually
 * 2)Using Loop
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 3;
    // arr[3] = 4;
    // arr[4] = 5;

    // scanf("%d",&arr[0]);
    // scanf("%d",&arr[1]);
    // scanf("%d",&arr[2]);
    // scanf("%d",&arr[3]);
    // scanf("%d",&arr[4]);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // printf("%d ",arr[0]);
    // printf("%d ",arr[1]);
    // printf("%d ",arr[2]);
    // printf("%d ",arr[3]);
    // printf("%d ",arr[4]);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


   
    return 0;
}
