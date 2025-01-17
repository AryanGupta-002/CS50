#include <cs50.h>
#include <stdio.h>

int pos_int(void);

int main(void)
{

    int height = pos_int();

    for (int i = 0; i < height; i++)
    {
        // left spaces
        for (int j = 0; j < (height - i - 1); j++)
        {
            printf(" ");
        }
        // right pyramid
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        // center space
        printf("  ");
        // left pyramid
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }
        // next row
        printf("\n");
    }
}

int pos_int(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    return height;
}
