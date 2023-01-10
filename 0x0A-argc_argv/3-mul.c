#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multipiies two numbers
 * @argc: number of arguments
 * @argv: array of srguments
 *
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int res;

	num1 = num2 = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);

	return (0);
}
