/**
 * https://codeforces.com/problemset/problem/1709/A
*/

#include<stdio.h>
int main(){
    int test;
    int arr[5];
    scanf("%d",&test);
    while(test--){
        int key;
        scanf("%d",&key);
        for(int i=1;i<=3;i++){
            scanf("%d",&arr[i]);
        }

        if(arr[key]==0){
            printf("NO\n");
            continue;
        }   
        key = arr[key];
        if(arr[key]==0){
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }
              
    return 0;
}

