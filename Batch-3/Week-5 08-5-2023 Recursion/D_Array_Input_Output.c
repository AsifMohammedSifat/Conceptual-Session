#include<stdio.h>
void solve(int arr[],int size,int i){
    if(i==size) return;
    printf("%d ",arr[i]);
    solve(arr,size,i+1);
}
int main(){
    int sz;
    scanf("%d",&sz);
    int arr[sz];
    for(int i=0;i<sz;i++){
        scanf("%d",&arr[i]);
    }
   solve(arr,sz,0);     
              
    return 0;
}
