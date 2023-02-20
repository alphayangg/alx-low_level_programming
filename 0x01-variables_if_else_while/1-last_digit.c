#include <stdlib.h>
#include < time.h>
#include <stdio.h>
/**
*Main - prints a text according number
*Return: Always (success)
*/

int main (void)

{
    int n, lastd;

    stand(time(0));
    n = rand() - RAND_MAX /2;
    lastd = n % 10;
    If (lastd > 5)
    {
    Printf("last digit of %d is %d and is
     greater than 5\n", n, lastd);
    }
    else if (lastd == 0)
    {
    printf ("last digit of %d is %d and is     0/n", n, lastd);
    }
    else if (lastd < 6 && lastd != 0)
    {
    Printf("last digit of %d is %d and is   less than 6 and not 0\n", n, lastd);
    }
    return (0);
}
