#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char d;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
