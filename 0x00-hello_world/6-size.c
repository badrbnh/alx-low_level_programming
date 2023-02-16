#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int myInt;
	char myChar;
	long myLong;
	short myShort;
	
	printf("The sixe of a char is : %lu\n", sizeof(char));
	
	printf("The sixe of a int is : %lu\n", sizeof(int));

	printf("The sixe of a long is : %lu\n", sizeof(long));

	printf("The sixe of a short is : %lu\n", sizeof(short));

	return (0);
}
