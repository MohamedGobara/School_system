
int search_element(int *arr, int size, int element)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == element)
        {

            return i + 1;
        }
    }
    return -1;
}

void array_print(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void array_print2(int *arr, int size)
{
    printf("postive: \n");
    for (int i = 0; i < size / 2 + 1; i++)
    {

        printf("%d  =>  %d\n", i, arr[i]);
    }
    printf("\n");
    printf("negtaive: \n");
    for (int i = (size / 2) + 1; i < size; i++)
    {

        printf("%d  =>  %d\n", (size / 2) - i, arr[i]);
    }
    printf("\n");
}

void array_insert(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {

        scanf("%d", arr[i]);
    }
}

int array_find_max(int *arr, int size)
{
    int max = 0, i = 0, index = 0;

    max = 0;

    // find max
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {

            max = arr[i];
            index = i;
        }
    }
    return max;
}

int array_find_min(int *arr, int size)
{
    int min = 0, i = 0, index = 0;

    min = arr[i];
    // find min
    for (i = 0; i < size; i++)
    {
        if (arr[i + 1] < arr[i])
        {

            min = arr[i + 1];
            index = i + 1;
        }
    }

    return min;
}


void array_reversee(int *arr1, int *arr2, int size)
{

    int i = 0, j = size - 1, temp = 0;

    for (; i < size - 1; i++)
    {

        temp = arr1[i];

        arr1[i] = arr2[j];

        arr2[j] = temp;

        j--;
    }
}




int *array_reverse(int *arr, int size)
{
    int i = 0, j = size - 1;

    printf("size :  %d \n", size);
    for (i = 0; i < size / 2; i++, j--)
    {

        int temp = 0;

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return arr;
}

void swap_two_array(int *arr1, int size1, int *arr2, int size2)

{
    int min = size1;
    if (size2 < min)
    {

        min = size2;
    }

    int i = 0;
    for (i; i < min; i++)
    {
        int temp = 0;
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}


int *marge_arrays(int *arr1, int size1, int *arr2, int size2, int *arr3, int size3)
{

    int j = 0;
    for (int i = 0; i < size3; i += 2, j++)
    {
        arr3[i] = arr1[j];
    }
    j = 0;
    for (int i = 1; i < size3; i += 2, j++)
    {
        arr3[i] = arr2[j];
    }
    printf("\n");
    return arr3;
}
