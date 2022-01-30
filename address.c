#include<stdio.h>

int main(){
    int a=88; int*ptr; ptr = &a;
    printf("the address of a is = %u\n", &a);
    printf("the value of a is %d\n", *ptr) ;
    return 0;
}