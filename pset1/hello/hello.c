#include <stdio.h>
#include <cs50.h>
//libraries which contain our called functions
int main(void)
{
//accepting input from user
    string name = get_string("What is your name?\n");
//printing input of user
    printf("hello, %s\n", name);
}