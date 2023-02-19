#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase.
 *
 * Return: 0
*/
int main(void)
{
	int i = 0, j;

	while (i < 100)
	{
	j = i;
	while (j < 100)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');
		if (i != 99 || j != 99)
		{
		putchar(',');
		putchar(' ');
	}
		j++;
	}
		i++;
	}
	putchar('\n');
	return (0);
}

