#include <stdio.h>
/**
 * main - prints tha alphabet in lowercase
 *
 * Return: 0
*/

	int main(void)

	{ int x;

		for (x = 'a'; x <= 'z'; x++)
		{

			putchar(x);
			putchar('\0');
		}
	return (0);
}
