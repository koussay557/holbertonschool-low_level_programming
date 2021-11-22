#include "main.h"

/**
 *create_file - function that creates a file.
  * @filename: file
  * @text_content: char
  *
  * Return: c
  */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}

/**
  * _strlen - calculat the length of string 
  * @s: char
  *
  * Return: length
  */
int _strlen(char *s)
{
	int x = 0;

	while (s[x])
		s++;

	return (x);
}