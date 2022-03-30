#include "main.h"
/**
* factorial - finds factorial for a given number n
* @n: int
* Return: int
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
