#include <cs50.h>
#include <stdio.h>

long long pos_no(void);
int vaild(long long);
int length(long long);
void company(long long, int);

int main(void)
{

    long long no = pos_no();
    if (vaild(no))
    {
        company(no, length(no));
    }
    else
    {
        printf("INVALID\n");
    }
}

// getting positive value function
long long pos_no(void)
{
    long long no;
    do
    {
        no = get_long("Number: ");
    }
    while (no < 0);

    return no;
}

// check the validity condition of card
int vaild(long long no)
{
    int value, x, a = 0, b = 0;
    for (int i = 1; no != 0; i++)
    {
        value = no % 10;

        if (i % 2 == 0)
        {
            value *= 2;
            if (value > 9)
            {
                x = value % 10;
                value /= 10;
                a += (x + value);
            }
            else
            {
                a += value;
            }
        }
        else
        {
            b = b + value;
        }
        no /= 10;
    }

    a += b;
    if (a % 10 == 0)
    {
        b = 1;
    }
    else
    {
        b = 0;
    }
    return b;
}

// check the length of card no
int length(long long no)
{
    int i;
    for (i = 0; no != 0; i++)
    {
        no /= 10;
    }
    return i;
}

// check thhe company of card
void company(long long no, int length)
{
    for (int i = 0; i < length - 2; i++)
    {
        no /= 10;
    }
    if ((no == 34 || no == 37) && length == 15)
    {
        printf("AMEX\n");
    }
    else if (no > 50 && no < 56 && length == 16)
    {
        printf("MASTERCARD\n");
    }
    else if (no / 10 == 4 && (length == 13 || length == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
