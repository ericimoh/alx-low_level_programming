#include "main.h"
#include <stdlib.h>
/**
 * positive_or_negative - test positive and negative
 * @i: test value
 * Return: Nothing
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
