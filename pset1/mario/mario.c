#include <stdio.h>
#include <cs50.h>
//libraries which contain our called functions

int main(void)
{
    int n;
    do


    {

        n = get_int("Enter height here: ");

    }
    while (n < 1 || n > 8);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
//n is height,j is column,i is row,k is space