/*
                            4. Exercise-1(Tag: Summation and Update): Sum and Update

Problem Statement:
You will be given a positive integer N and after that an integer array of size N. Then you will be given Q which refers to queries.
For each query you will be given i and v where i refers to the index and v to the value. You need to  add the value to that index.
After all of the queries print the values.

Sample Input
5 
1 2 3 4 5
3
0 10
2 5
4 5
Sample Output
11 2 8 4 10

*/
//solution
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
    int index,value;
    scanf("%d %d",&index,&value);
    arr[index] = arr[index] + value;
  }      
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }  
  return 0;
}
