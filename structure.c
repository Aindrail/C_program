#include<stdio.h>
#include<string.h>
struct employee {
    int code; 
    float salary;
    char name[10];
};
int main(){ int i;
    struct employee e[5];
   for (  i =0 ; i<5 ; i++) 
   {
      printf("enter the code of employee %d\n", i+1 );
      scanf("%d",&e[i+1].code);
      printf("enter the salary of employee %d\n",i+1);
      scanf("%f", &e[i+1].salary);
      printf("enter the name of employee %d\n",i+1);
      scanf("%s" , e[i+1].name);
   }

   
   for(i=0;i<5;i++){
       printf("the code of employee %d is %d ,name of employee %d is: %s and his salary is: %f \n", i+1, e[i+1].code, i+1, e[i+1].name,  e[i+1].salary);

   }

    return 0;
}