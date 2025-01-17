#include <cs50.h>
#include <stdio.h>

int leftchange(int, int);
int changefn(int, int);
int pos_int(void);

int main(void)
{
    int left;
    // getting change
    int change = pos_int();

    left = changefn(change, 25);
    change %= 25;

    left += changefn(change, 10);
    change %= 10;

    left += changefn(change, 5);
    change %= 5;

    left += changefn(change, 1);

    printf("%i\n", left);
}
// change function
int changefn(int change, int x)
{
    change /= x;
    return (change);
}
// getting positive value function
int pos_int(void)
{
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);

    return change;
}
