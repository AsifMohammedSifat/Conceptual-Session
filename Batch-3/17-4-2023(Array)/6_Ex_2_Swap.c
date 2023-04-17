#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  int q;
  scanf("%d",&q);
  for(int i=1;i<=q;i++){
    int l,r;
    scanf("%d %d",&l,&r);
    int temp;
    temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
  }      
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }  
  
  return 0;
}
