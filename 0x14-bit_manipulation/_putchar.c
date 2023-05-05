#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1 on success, or -1 on error and ernno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
