#include <stdio.h>

/**
 * main -  that prints the name of the file it was compiled from,
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	printf("File:%s\n", __FILE__);
	return (0);
}
