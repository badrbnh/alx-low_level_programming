#include <string.h>
/**
 * infinite_add - adds two numbers.
 * @n1: Firsr number.
 * @n2: Second number.
 * @r: Buffer
 * @size_r: buffer size
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

	int carry = 0, sum = 0, len1 = strlen(n1), len2 = strlen(n2);
	int i = len1 - 1, j = len2 - 1, k = size_r - 1;

	r[k] = '\0';

	while (i >= 0 || j >= 0)
	{
		int digit1 = i >= 0 ? n1[i] - '0' : 0;
		int digit2 = j >= 0 ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		if (k <= 0)
			return (0);
		r[k--] = (sum % 10) + '0';
		i--;
		j--;
	}
	if (carry)
	{
		if (k <= 0)
			return (0);
		r[k--] = carry + '0';
	}
	if (k < 0)
		return (0);

	memmove(r, &r[k + 1], size_r - k - 1);
	return (r);
}
