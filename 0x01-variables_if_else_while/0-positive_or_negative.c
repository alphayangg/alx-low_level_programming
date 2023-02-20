#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -print if number is greater than zero ispositive,and if is zero is
 zero and if number is less than zero is  negative
 * Return: Always(sucess)
*/
int main (void)
{
	int n;

	srand(time (0));
	n = rand () -RAND_MAX /2;
	if (n > 0)
	{
	printf ("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf ("%d is zero\n", n);
	}
	else if (n < 0)
	{
	printf ("%d is negatve\n", n);
	}
	return (0);
}
