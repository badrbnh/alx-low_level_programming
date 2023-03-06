#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s:  parameter is a pointer to the string to be searched
 * @accept: pointer to the string containing the characters to search for.
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int *p = s;

	while (*p != '\0')
	{
		if strchr(accept, *p)
			count++;

		else
		{
			break;
		}

		p++;
	}
	return (count);
}
