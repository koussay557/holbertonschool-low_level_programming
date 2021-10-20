#include "main.h"
/**
 *_strlen_recursion - returns the length of a string
 *
 * Return: s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	s++;
	return ((1) + _strlen_recursion(s));
}
