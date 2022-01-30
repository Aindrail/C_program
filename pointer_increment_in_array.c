#include<stdio.h>

int main(){
    double i; // int i; float i same space ie 4 bits
    printf("enter the value of i");
    scanf( "%f" , &i);
    int *ptr = &i;
    printf("the value of pointer initially is %u\n", ptr);
    ptr++;
    printf("the value of pointer after increament is %u\n", ptr);
    return 0;
}