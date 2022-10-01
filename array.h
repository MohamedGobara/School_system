#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED



int search_element(int *arr, int size, int element) ;

int array_find_max(int *arr, int size) ;


int array_find_min(int *arr, int size) ;

int *create_array_with_two_numbers(int num1, int num2)  ;

int find_most_repeated_number(int *arr, int size) ;

int count_seq(int *arr, int size, int *memory) ;
int *array_reverse(int *arr, int size) ;
int count_of_the_longest_given_number(int *arr, int size, int num) ;

int *marge_arrays(int *arr1, int size1, int *arr2, int size2, int *arr3, int size3) ;
int *remove_rpeated_numbers(int *arr, int size, int *new_arr) ;

int *swap_after_zeros(int *arr) ;
int sum(int *arr) ;

int *remove_repeated_numbers(int *arr, int size) ;

int most_repeated_num_in_sort_array(int *arr, int size) ;

#endif // ARRAY_H_INCLUDED
