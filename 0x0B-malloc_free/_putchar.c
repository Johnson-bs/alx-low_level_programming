#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: tehe character to print
 * Return: always 0 (success), 1 (error) and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
