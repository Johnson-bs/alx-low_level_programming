#include <stdio.h>
#include "main.h"
/**
 * main - Prints the name of the program
 * @argc: argument count
 * @argv: value
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	/*declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*while - prints each arguments*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
