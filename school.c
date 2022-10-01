
#include "student.h"
#include "school.h"
#include "interface.h"

int array_index =4 ;

stud total_students[10] =
{


    {
        "Mohamed",  1, 20, 01221515,

        {
            "Hussein", 59, 1554544
        },
        {
            "esraa", 48, 121545455
        },
        4
    },

    {
        "omar", 2, 10, 01221515,

        {
            "ashraf", 24, 1554544
        },
        {
            "alaa", 48, 121545455
        },
        4
    },
    {
        "sayed",     3, 20, 01221515,

        {
            "ahmed", 59, 1554544
        },
        {
            "mona", 48, 121545455
        },
        4
    },
    {
        "hazem",   4, 25, 01221515,

        {
            "mahmoud", 18, 1554544
        },
        {
            "shahd", 10, 121545455
        },
        4
    },



} ;


void print_school(stud *information, int size)
{
    printf("\n");

    change_text(YELLOW) ;

    printf("ID\tStudent name\tAge\tPhone number\tFather name\tAge\tPhone number\tMother name\tAge\tPhone number\n") ;
    printf("\n");


    change_text(SKY) ;

    for(int i=0  ; i <size ; i++)
    {

        if (information->age==0)


        {
            return ;
        }


        else
        {
            printf("%d\t%s\t\t%d\t%d"
                   "\t\t%s\t\t%d\t%d"
                   "t\t%s\t\t%d\t%d \n",information->student_id,information->student_name,information->age,information->phone_number,
                   information->father.person_name, information->father.age,information->father.phone_number,
                   information->mother.person_name, information->mother.age,information->mother.phone_number) ;
            information++;

        }

        printf("\n");
    }



}

