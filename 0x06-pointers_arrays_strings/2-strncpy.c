#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: destination
 *@src: source
 *@n: is the maximum number of characters to be copied
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (src[i] < n)
	{

		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	while (dest[i])
	{
		dest[i] = '\0';
		i++;
	}
	

	return (dest);
}
