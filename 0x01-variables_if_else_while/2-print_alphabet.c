#include <stdio.h>
/**
 * main - prints tha alphabet in lowercase
 *
 * Return: 0
*/

	int main(void)

	{
		char i = 'a';

		for (; i <= 'z'; i++)
		{
			putchar(i);
		}

		putchar('\n');

		return (0);
}
