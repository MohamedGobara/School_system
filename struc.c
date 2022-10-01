#include "struc.h"

void student_print(struct student s)
{

    printf("name : %s     age: %d \n", s.str, s.age);
}

void student_print_byRef(struct student *s)
{

    printf("name : ");

    string_print(s->str);

    printf("age : %d\n", s->age);
}
