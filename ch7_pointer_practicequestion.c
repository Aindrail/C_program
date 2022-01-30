#include<stdio.h>

int main(){ int n, i,k;
    printf("enter size of which your array\n");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    for( i=0; i<n ; i++){
        printf("enter the element of arrays\n");
        scanf("%d",&arr[i]);
    } i=0;
    ptr+=2;
for(i=0; i<n; i++){
  printf("the %dth element of the array is : %d\n",i+1,arr[i]);} i=0;

for(i=0;i<n;i++){
  if(*ptr == arr[i]){
    printf("the pointer has shifted to %dth place\n",i+1); break;
  }}
  if(i==2)
  printf("the proggramme is generating correct output\n");
  else 
   printf("the proggramme is not generating the correct output\n");


    return 0;
}