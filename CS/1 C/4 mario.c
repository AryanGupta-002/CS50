#include <stdio.h>

int main(void){

int n = 3;

    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");

printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("#\n");
    }

printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
printf("\n");
}
