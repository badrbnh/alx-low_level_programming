#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */


/* betty style doc for function main goes there */
/**
 * main - Determines if a number is positive, negative or zero
 *
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */


	int last = n % 10;

		if (last > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last);

			return (0);
		}
		else if (last == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, last);

			return (0);
		}
		else(last < 6 && last != 0);
		{	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);

			return (0);
		}
	return (0);


}