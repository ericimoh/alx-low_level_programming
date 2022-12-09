#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random number to check positive or negative
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	char lastDigit[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("%s %d is %d and is ", lastDigit, n, n % 10);

	if (m > 5)
	{
		printf("greater than 5\n");
	}
	else if (m == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
