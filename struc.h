#ifndef STRUC_H_INCLUDED
#define STRUC_H_INCLUDED



struct student
{
    char *str[20];
    char age;
};

void student_print(struct student s);

void student_print_byRef(struct student *s);
#endif // STRUC_H_INCLUDED
