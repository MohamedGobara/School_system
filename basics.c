
int cheack_prime(int num)
{
    int flag = 0;

    if (num == 0 || num == 1)
    {

        return 1;
    }
    else
    {

        for (int i = 2; i < num && flag == 0; i++)
        {

            if (num % i == 0)
            {

                flag = 1;
            }
        }

        if (flag == 1)
        {
            return 1;
        }
        else if (flag == 0)

        {

            return 0;
        }
    }
}

int reverse_number(int num)
{

    int rem = 0, rev = 0;

    while (num != 0)
    {
        rem = num % 10;

        rev = (rev * 10) + rem;

        num = num / 10;
    }

    return rev;
}

void swap(int *num1, int *num2)
{

    int temp = 0;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void swap_pointers(char **p1, char **p2)
{
    char *temp = 0;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void arrray_of_pointers_print(char **str, int size)
{
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; str[i][j]; j++)
        {

            printf("%c", *(*(str+i)+j));
        }

        printf("\n");
    }
}
