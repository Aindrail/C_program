#include<stdio.h>
#include<stdlib.h>

int main(){
    char c;
    FILE *fptr;
    fptr = fopen("records_of_student.txt", "w");
   printf("Enter the name of the student\n");
    char name1[50]; 
   fgets(name1, 50, stdin);
   fprintf(fptr, "Student_1\n Name:- %s ", name1);
   int roll_no;
    printf("Enter the roll of the student\n");
    scanf("%d",&roll_no);
   fprintf(fptr, "Roll No.:- %d \n", roll_no);
   float marks;
    printf("Enter the marks of the student\n");
   scanf("%f",&marks);
   fprintf(fptr, " Marks :- %f\n", marks);
   fclose(fptr);
   fptr = fopen("records_of_student.txt", "a");
    printf("Enter the name of the student\n");
    char name2[50]; 
    getchar();
    fgets(name2, 50, stdin);
   fprintf(fptr, "Student_2\n Name:- %s ", name2);
   int roll_no2;
    printf("Enter the roll of the student\n");
    scanf("%d",&roll_no2);
   fprintf(fptr, "Roll No.:- %d \n", roll_no2);
   float marks2;
    printf("Enter the marks of the student\n");
   scanf("%f",&marks2);
   fprintf(fptr, " Marks :- %f\n", marks2);
   printf("Enter the name of the student\n");
    char name3[50]; 
    getchar();
    fgets(name3, 50, stdin);
   fprintf(fptr, "Student_3\n Name:- %s ", name3);
   int roll_no3;
    printf("Enter the roll of the student\n");
    scanf("%d",&roll_no3);
   fprintf(fptr, "Roll No.:- %d \n", roll_no3);
   float marks3;
    printf("Enter the marks of the student\n");
   scanf("%f",&marks3);
   fprintf(fptr, " Marks :- %f\n", marks3);
   fclose(fptr);
    fptr = fopen("records_of_student.txt", "r"); 
    if (fptr == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(fptr); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fptr); 
    } 
  
    fclose(fptr); 
return 0;
   
}