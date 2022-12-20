#include "main.h"
/**
 * _strlen - returns the lenght of string.
 * @s: input stringeturn.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\n')
		count++;
	return (count);
}
