#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int myInt;
	char myChar;
	long int myLongInt;
	float myFloat;
	long long  int myLongLongInt;

	printf("Size of a char is: %lu byte(s)\n", sizeof(char));

	printf("Size of an int is: %lu byte(s)\n", sizeof(int));

	printf("Size of a long int is: %lu byte(s)\n", sizeof(myLongInt));

	printf("Size of a long long int is: %lu byte(s)\n", sizeof(myLongLongInt));

	printf("Size of a float is: %lu byte(s)\n", sizeof(myFloat));

	return (0);
}
