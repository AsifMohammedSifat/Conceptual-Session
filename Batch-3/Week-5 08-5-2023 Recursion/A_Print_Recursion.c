#include<stdio.h>
void solve(int n){
    if(n==0) return;
    printf("I love Recursion\n");
    solve(n-1);
}
int main(){
    int num;
    scanf("%d",&num);
    solve(num);        
              
    return 0;
}
