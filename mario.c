#include <stdio.h>
#include <cs50.h>

void pyramid();

int main(void)
{
int n;
    do
    {
        n = get_int("Height:\n");
    }
    while(n < 1);

    pyramid(n);
}

void pyramid(n)
{

    for(int i = n; i >= 1; --i)
    {
        for(int j = 1; j <= i ; j++)
        {
            printf("$ ");
        }
        printf("\n");
    }

}
