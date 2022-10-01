#include "interface.h"
#include "student.h"
#include "school.h"
#include <windows.h>   // WinApi header
#include <stdio.h>
#include <stdlib.h>
#include "interface.h"



extern stud total_students[10];
extern array_index ;


void delay_print(char *str, unsigned int milliseconds)
{
    for (; *str; str++)
    {
        putchar(*str);
        fflush(stdout);
        milli_sleep(milliseconds);
    }
}

void milli_sleep(unsigned int milliseconds)
{
#ifdef _WIN32
    // use windos Sleep function, sleeps for a number of milliseconds
    Sleep(milliseconds);
#else
    // use posix nanosleep function, sleeps for a number of nanoseconds
    struct timespec ts;
    ts.tv_sec = milliseconds / 1000;
    ts.tv_nsec = (milliseconds % 1000) * 1000000L;
    nanosleep(&ts, NULL);
#endif
}
//Example -- >     delay_print("Hello world",10) ;

void change_text(int k)
{
    HANDLE  hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, k);

}
int start= 0  ;

void press_any_key(void)
{
    printf("\n===================================\n") ;
    printf("press any number to continuation....\n") ;
    int p ;
    scanf("%d",&p) ;
    system("cls") ;
    start_program() ;

}

void print_start_program(void)
{
    change_text(BLUE) ;

    if (start==0)
    {

        int x  = 0, y =100;

        delay_print (" .d8888b.           888                        888        .d8888b.                    888               \n",x) ;
        delay_print(" ",y) ;
        delay_print ( "d88P  Y88b          888                        888       d88P  Y88b                   888                 \n",x) ;
        delay_print(" ",y) ;

        delay_print ( "Y88b.               888                        888       Y88b.                        888                   \n",x) ;
        delay_print(" ",y) ;

        delay_print (  " Y888b.    .d8888b 88888b.   .d88b.   .d88b.   888         Y888b.   888  888 .d8888b  888888  .d88b.  88888b.d88b.\n",x) ;
        delay_print(" ",y) ;

        delay_print (  "    Y88b. d88P     888  88b d88 88b  d88  88b  888            Y88b. 888  888 88K      888    d8P  Y8b 888  888  88b \n",x) ;
        delay_print(" ",y) ;

        delay_print (  "      888 888      888  888 888  888 888  888  888              888 888  888  Y8888b. 888    88888888 888  888  888 \n",x) ;
        delay_print(" ",y) ;

        delay_print (  "Y88b  d88P Y88b.   888  888 Y88..88P Y88..88P  888       Y88b  d88P Y88b 888      X88 Y88b.  Y8b.     888  888  888 \n",x) ;
        delay_print(" ",y) ;

        delay_print (  "  Y8888P    Y8888P 888  888   Y88P     Y88P    888         Y8888P     Y88888  88888P  Y888   Y8888    888  888  888 \n",x) ;
        delay_print(" ",y) ;

        delay_print ( "                                                                         888                                        \n",x) ;
        delay_print(" ",y) ;

        delay_print ( "                                                                    Y8b d88P                                        \n",x) ;
        delay_print(" ",y) ;

        delay_print (  "                                                                      Y88P                                         \n",x) ;
        delay_print("\n",750) ;

        start=1 ;
        system("cls") ;
        start_program() ;


    }

}

void start_program (void)
{

    print_start_program() ;

    // system("cls")  ;
    printf("\n") ;
    change_text(GREEN) ;

    printf ("1. Add student \n\n") ;
    change_text(LIGHT_BLUE) ;


    printf ("2. Edit student \n\n") ;
    change_text(RED) ;

    printf ("3. print student \n\n") ;
    change_text(SKY) ;


    printf ("4. call student \n\n")  ;
    change_text(YELLOW) ;

    printf ("5. print School \n\n") ;
    change_text(ORANGE) ;

    int input  ;


    scanf("%d", &input) ;
    if(input==1)
    {

        student_scan(&total_students[array_index]) ;
        press_any_key() ;

    }
    else  if(input==2)
    {
        printf("enter student id : ") ;

        int i ;
        scanf("%d",&i) ;
        student_edit(i) ;
        press_any_key() ;

    }
    else  if(input==3)
    {

        int i ;
        printf("Enter student id  : ") ;
        scanf("%d", &i) ;
        student_print(total_students[i-1]) ;
        press_any_key() ;



    }
    else  if(input==4)
    {
        printf("enter student id : ") ;

        int i ;
        scanf("%d",&i) ;
        student_call(i) ;
        press_any_key() ;

    }
    else  if(input==5)
    {
        print_school(total_students, 10) ;
        press_any_key() ;


    }
    else
    {
        printf("Wrong input!!\n") ;
    }

}




