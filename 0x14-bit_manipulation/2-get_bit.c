#include "main.h"
#include <stdio.h>

/**
 * get_bit - return the value of a bit at an index in a decimal number
 * @n: number to check or search
 * @index: index of a bit
 *
 * Returns: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}
