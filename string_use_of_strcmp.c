#include<stdio.h>
#include<string.h>
int main(){
    char str1[10] , str2[10]  ;
    // printf("enter the string 1 \n");
    // scanf("%s", str1);
    // printf("enter the string 2 \n");
    // scanf("%s", str2);
    int k= strcmp("Far","Joke");
    int j= strcmp("Far","Far");
    int i= strcmp("Joke","Far");
    printf("the value is %d\n",k);
     printf("the value is %d\n",j);
     printf("the value is %d\n",i);

    return 0;
}