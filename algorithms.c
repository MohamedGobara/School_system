#include "student.h"
#include "school.h"

int binary_search_structID(stud *std, int size, int element)
{

    int low = 0, last = size - 1;

    int middle = (low + last) / 2;

    int i = 0;
    for (; i < size && low <= last; i++)
    {
        middle = (low + last) / 2;
        std=std+middle;
        if (std->student_id == element)
        {

            return middle + 1;
        }

        else if (std->student_id< element)
        {
            low = middle + 1;
        }
        else if (std->student_id > element)
        {
            last = middle - 1;
        }
    }
    return -1;
}
int binary_search(int *arr, int size, int element)
{

    int low = 0, last = size - 1;

    int middle = (low + last) / 2;

    int i = 0;
    for (; i < size && low <= last; i++)
    {
        middle = (low + last) / 2;

        if (arr[middle] == element)
        {

            return middle + 1;
        }

        else if (arr[middle] < element)
        {
            low = middle + 1;
        }
        else if (arr[middle] > element)
        {
            last = middle - 1;
        }
    }
    return -1;
}
