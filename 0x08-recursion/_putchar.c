#include <unistd.h>
/**
 * _putchar - writes the charater c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -` is returned, and errno is set immediately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
