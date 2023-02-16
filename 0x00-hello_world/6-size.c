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
	
	printf("Size of a char is : %lu\n", sizeof(char));
	
	printf("Size of an int is : %lu\n", sizeof(int));

	printf("Size of a long int is : %lu\n", sizeof(myLongInt));

	printf("Size of a long long int is : %lu\n", sizeof(myLongLongInt));

	printf("Size of a float is : %lu\n", sizeof(myFloat));

	return (0);
}
