#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the name of the program
 * @argc: count argument
 * @argv: value
 * Return: always 0 (success), 1 (false)
 */
int main(int argc, char *argv[])
{
	int a, b;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a *b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
