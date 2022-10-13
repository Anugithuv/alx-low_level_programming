#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("The size of an char is: %i byte(s)\n", sizeof(char));
	printf("The size of a int is: %i byte(s)\n", sizeof(int));
	printf("The size of a long int is: %i byte(s)\n", sizeof(long int));
	printf("The size of a long long int is: %i (s)\n", sizeof(long long int));
	printf("The size of a float is: %i (s)\n", sizeof(float));
	return (0);

}
