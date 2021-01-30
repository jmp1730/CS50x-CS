#include <stdio.h>
#include <cs50.h>
//libraries which contain our called functions
void print(char c, int n);

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
        print(' ', n - 1 - i);
        print('#', i + 1);
        print(' ', 2);
        print('#', i + 1);

        printf("\n");
    }

}

void print(char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
}