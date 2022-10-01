#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED


typedef struct person
{
    char person_name[35] ;

    int age  ;

    unsigned  int phone_number  ;



} pers ;

typedef struct student
{
    char student_name[35] ;

    int student_id ;


    int age  ;

    unsigned int phone_number  ;

    pers father  ;
    pers mother  ;

    int no_brother ;


    pers *brother  ;





} stud ;


#endif // STUDENT_H_INCLUDED
