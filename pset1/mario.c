#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size = get_int("How big do yo uwant your pyramid to be? ");

    for (int i = 0; i < size; i++)
    {
        for (int j = size; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf(" ");
        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}