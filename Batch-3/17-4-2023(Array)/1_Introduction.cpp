/***
 *                      Introduction
 *  1) What is Array
 *  2) Declearation of Array
 *  3) Size of Array
*/

#include<stdio.h>
int main(){
  int arr[5];
  printf("%d\n",sizeof(arr)/sizeof(int)); 
  printf("%d\n",sizeof(arr)/sizeof(arr[0]));            
  return 0;
}
