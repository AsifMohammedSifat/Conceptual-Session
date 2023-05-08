#include<stdio.h>
void solve(int arr[],int size){
    if(size<0) return;
    solve(arr,size-1);
    printf("%d ",arr[size]);
}
int main(){
    int sz;
    scanf("%d",&sz);
    int arr[sz];
    for(int i=0;i<sz;i++){
        scanf("%d",&arr[i]);
    }
    solve(arr,sz-1);        
              
    return 0;
}
