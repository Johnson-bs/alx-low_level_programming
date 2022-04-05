#include "main.h"
/**
 * factorial - factorial of a given number
 * @s: pointer block memory to fill
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0) /*Base condition*/
		return (1);

	else id (n < 0) /*Base condition*/
		return (-1);
	else
		return (n * factorial(n - 1)); /*Recursive call*/
}
