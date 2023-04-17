/**
 *                       2_Array_Input_Output.c
 * 1)Manually
 * 2)Using Loop
*/

#include <stdio.h>
int main()
{
    int arr[3];

    // scanf("%d", &arr[0]);
    // scanf("%d", &arr[1]);
    // scanf("%d", &arr[2]);
    for(int i=0;i<3;i++){
        scanf("%d", &arr[i]);
    }


    // printf("%d ",arr[0]);
    // printf("%d ",arr[1]);
    // printf("%d ",arr[2]);
      for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
