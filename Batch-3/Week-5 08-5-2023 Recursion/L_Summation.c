#include<stdio.h>
int solve(int arr[],int size){
    if(size==0) return arr[0];
    return arr[size] + solve(arr,size-1);
}
int main(){
    int sz;
    scanf("%d",&sz);
    int arr[sz];
    for(int i=0;i<sz;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d\n",solve(arr,sz-1));        
              
    return 0;
}
