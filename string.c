/*
scanf("%s") -> scan fiest word ;
gets(str) - > scan string
puts(str)-> scan string
printf("%s") -> for loop for print string
*/
int lenght_of_string(char *str)
{
    int i = 0;
    for (i; str[i]; i++)
    {
    }
    return i;
}

int lenght_of_words(char *str)
{
    int i = 0, counter = 0;
    for (i; str[i]; i++)
    {
        if (str[i] == ' ' && str[i + 1] != 0)
        {

            counter++;
        }
    }
    return counter + 1;
}

void string_print(char *str)
{

    for (int i = 0; str[i]; i++)
    {

        printf("%c", str[i]);
    }
    printf("\n");
}

void capitol_to_small(char *str)
{

    for (int i = 0; str[i]; i++)
    {

        if (str[i] >= 'A' && str[i] <= 'Z')
        {

            str[i] = str[i] + 32;
        }
    }

}

void string_scan(char *str, int size)
{
    int i = 0;
    scanf(" %c", &str[i]);
    for (; str[i] != '\n' && i < size - 1;)
    {
        i++;
        scanf("%c", &str[i]);
    }
    str[i] = 0;
}




int stringToInt(char *str, int *pnum)
{
    int num = 0, i = 0;
    for (; str[i]; i++)
    {

        if (str[i] >= '0' && str[i] <= '9')
        {
            num = (num * 10) + (str[i] - '0');
        }
        else
        {

            return 0;
        }
    }

    *pnum = num;
    return 1;
}

int string_check_equal(char *str1, char *str2)
{

    if (lenght_of_string(str1) != lenght_of_string(str2))
    {

        return 0;
    }

    else
    {
        int i = 0;
        char flag = 0;
        for (; i < lenght_of_string(str1) && flag == 0; i++)
        {

            if (str1[i] != str2[i])
            {

                flag = 1;
            }
        }

        if (flag == 0)
        {

            return 1;
        }
        else
            return 0;
    }
}

int string_compare(char *str1, char *str2)
{
    int i;
    for (i = 0; str1[i] || str2[i]; i++)
    {
        if (str1[i] != str2[i])
            return 1;
    }
    return 0;
}

char char_small_to_capital(char c)
{
    char offset = 'a' - 'A';
    c >= 'a' &&c <= 'z' ? c -= offset : 0;
    return c;
}

int string_compare_insensitive(char *str1, char *str2)
{
    int i;
    for (i = 0; str1[i] || str2[i]; i++)
    {
        if (char_small_to_capital(str1[i]) != char_small_to_capital(str2[i]))
            return 0;
    }
    return 1;
}

int str_Compare_NotCaseSensitive2(char *str1, char *str2)
{
    int i;
    for (i = 0; str1[i] && str2[i]; i++)
    {
        if (str1[i] != str2[i])
        {
            if ((str2[i] != str1[i] - ('a' - 'A')) && (str2[i] != str1[i] + ('a' - 'A')))
            {
                return 0;
            }
        }
    }
    if (str1[i] == str2[i])
        return 1;
    else
        return 0;
}
