#include "student.h"
#include "string.h"
#include "array.h"
#include "school.h"
#include <time.h>
#include <windows.h>   // WinApi header
#include <stdio.h>
#include <stdlib.h>
#include "interface.h"
int id=5 ;
extern stud total_students[10];
extern array_index ;






void student_scan (stud *std)
{
            printf("\n");

            change_text(GREEN) ;

    std->student_id= id;
    printf("Enter name : ") ;
    string_scan(std->student_name, 35) ;
    printf("\nEnter age : ") ;
    scanf("%d", &std->age) ;

    printf("\nEnter phone number : ") ;
    scanf("%d", &std->phone_number) ;
    printf("\nEnter Father name : ") ;
    string_scan(std->father.person_name, 35) ;
    printf("\nEnter Father age : ") ;
    scanf("%d", &std->father.age) ;

    printf("\nEnter Father phone number : ") ;
    scanf("%d", &std->father.phone_number) ;
    printf("\nEnter Mother name : ") ;
    string_scan(std->mother.person_name, 35) ;
    printf("\nEnter Mother age : ") ;
    scanf("%d", &std->mother.age) ;

    printf("\nEnter Mother phone number : ") ;
    scanf("%d", &std->mother.phone_number) ;


    printf("\nEnter number of brothers : ") ;
    scanf("%d", &std->no_brother) ;


    std->brother =  (pers*)malloc(std->no_brother*sizeof(pers)) ;
    int n = std->no_brother  ;
    int brother_index=0 ;
    while(n--)
    {



        printf("Enter name of brother  %d : ", brother_index+1) ;
        string_scan(((std->brother)+brother_index)->person_name, 35) ;
        printf("\nEnter age of brother  %d : ",brother_index+1) ;
        scanf("%d", &((std->brother)+brother_index)->age) ;

        printf("\nEnter phone number of brother %d: ",brother_index+1) ;
        scanf("%d", &((std->brother)+brother_index)->phone_number) ;

        brother_index++ ;
    }
    id++    ;
    array_index++ ;

}

student_edit(int id)
{
            printf("\n");

            change_text(LIGHT_BLUE) ;


    if((total_students+id-1)->student_id==0)
    {


        printf("Not found\n") ;
    }

    else
    {
        stud *s ;
        s= &total_students[id-1] ;   ;
        printf("found it\n") ;
        student_print(total_students[id-1]) ;



        printf("choose data you want edit it:\n") ;

        printf("1.name\n") ;
        printf("2.age\n") ;
        printf("3.phone number\n") ;

        int ch ;

        printf("Enter your choose : ") ;
        scanf("%d", &ch) ;

        if(ch==1)
        {
            printf("Enter name : ") ;
            // s->student_name=['0'] ;
            string_scan(s->student_name, 35) ;

        }
        else if(ch==2)
        {
            printf("Enter Age : ") ;
            scanf("%d",&s->age) ;

        }
        else if(ch==3)
        {
            printf("Enter phone number : ") ;
            scanf("%d",&s->phone_number) ;


        }
        else
        {

            printf("wrong input\n") ;


        }

    }

}


void student_print (stud *std)
{
            printf("\n");

            change_text(GREEN) ;

    printf ("Student data :- \n");
                change_text(BURBLE) ;


    printf("Id : %d \n", std->student_id) ;
    printf("Name : ") ;

    string_print(std->student_name) ;
    printf("Age: %d \n", std->age) ;
    printf("Phone number: %d \n", std->phone_number) ;

    printf("*********************\n") ;
            change_text(GREEN) ;

    printf ("Student's father's data :- \n") ;
                change_text(BURBLE) ;

    printf("Name : ") ;
    string_print(std->father.person_name) ;

    printf("Age: %d \n", std->father.age) ;
    printf("Phone number: %d \n", std->father.phone_number) ;

    printf("*********************\n") ;
                change_text(GREEN) ;

    printf ("\nStudent's mother's data :- \n") ;
                change_text(BURBLE) ;

    printf("Name : ") ;
    string_print(std->mother.person_name) ;

    printf("Age: %d \n", std->mother.age) ;
    printf("Phone number: %d \n", std->mother.phone_number) ;

    printf("*********************\n") ;
}


void student_call(int id)
{
        printf("\n");


            change_text(SKY) ;


    if((total_students+id-1)->student_id==0)
    {


        printf("Not found\n") ;
    }

    else
    {
        stud *s ;
        s= &total_students[id-1] ;
        system("cls") ;
        printf("student name : ") ;

        string_print(s->student_name) ;
        printf("id->%d\n", s->student_id) ;

        printf("Call") ;

        delay_print(".",275) ;

        delay_print(".",275) ;

        delay_print(".\n",275) ;
        system("cls") ;
        printf("student name : ") ;

        string_print(s->student_name) ;
        printf("id->%d\n", s->student_id) ;

        printf("Call") ;

        printf("...") ;
        system("cls") ;
        printf("student name : ") ;

        string_print(s->student_name) ;
        printf("id->%d\n", s->student_id) ;

        printf("Call") ;

        printf("..") ;
        system("cls") ;
        printf("student name : ") ;

        string_print(s->student_name) ;
        printf("id->%d\n", s->student_id) ;

        printf("Call") ;

        printf(".") ;
        system("cls") ;

        printf("student name : ") ;

        string_print(s->student_name) ;
        printf("id->%d\n", s->student_id) ;

        printf("Call") ;

        delay_print(".",275) ;

        delay_print(".",275) ;

        delay_print(".\n",275) ;




    }
}
