#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED


int lenght_of_string(char *str) ;


int lenght_of_words(char *str)  ;


void string_print(char *str)  ;

void capitol_to_small(char *str) ;


void string_scan(char *str, int size) ;

void string_reverse(char *str) ;


void string_reverse_from_to(char *str, int start, int last) ;

void intToString(int n, char *str) ;


int stringToInt(char *str, int *pnum) ;

int string_check_equal(char *str1, char *str2) ;


int string_compare(char *str1, char *str2) ;

char char_small_to_capital(char c) ;


int string_compare_insensitive(char *str1, char *str2) ;

int str_Compare_NotCaseSensitive2(char *str1, char *str2) ;


int string_check_mirror(char *str1, char *str2) ;

void longestEvenWord(char *str) ;

void string_reverse_by_words(char *str) ;


void floatToString(float num, int no_after_point, char *str) ;




#endif // STRING_H_INCLUDED
