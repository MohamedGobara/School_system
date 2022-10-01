unsigned int reverse_bits(unsigned int num, int type)
{

    unsigned int new = 0;

    int i = 0, j = type;

    for (i = 0; i < type; i++, j--)
    {

        if ((num >> i) & 1)
        {

            new = new | (1 << j);
        }
    }
    return new;
}
unsigned int reverse_bits_from_to(unsigned int num, int from , int to)
{

    unsigned int new = 0;

    int i = 0, j = to;

    for (i = from; i < to; i++, j--)
    {

        if ((num >> i) & 1)
        {

            new = new | (1 << j);
        }
    }
    return new;
}
unsigned char reverse_bits_char(unsigned char num)
{

    unsigned int new = 0;

    char i = 0, j = 7;

    for (i = 0; i < 7; i++, j--)
    {

        if ((num >> i) & 1)
        {

            new = new | (1 << j);
        }
    }
    return new;
}

unsigned int counter_one(unsigned int num)
{

    unsigned int counter = 0;

    for (int i = 0; i < 32; i++)
    {

        if (num >> i & 1 == 1)
        {

            counter++;
        }
    }
    return counter;
}

void print_active_bits_int(unsigned int num)
{

    int flag = 0;
    for (int i = 31; i >= 0 && flag == 0; i--)
    {

        if ((num >> i) & 1 == 1)

        {
            for (int j = i; j >= 0; j--)
            {

                if (num >> j & 1 == 1)

                {
                    printf("1");
                }

                else
                {

                    printf("0");
                }
            }

            flag = 1;
        }

        {
        }
    }
}

void print_all_bits_int(unsigned int num)
{
    for (int i = 31; i >= 0; i--)
    {

        if ((num >> i) & 1 == 1)
        {
            printf("1");
        }

        else
        {

            printf("0");
        }
    }
}

void print_all_bits_char(unsigned char num)
{
    for (int i = 7; i >= 0; i--)
    {

        if ((num >> i) & 1 == 1)
        {
            printf("1");
        }

        else
        {

            printf("0");
        }
    }
}
