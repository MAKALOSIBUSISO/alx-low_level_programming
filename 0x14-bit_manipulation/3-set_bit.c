#include "main.h"
#include <stdio.h>

/**
 * set_bit - value of a bit 7at a given index to 1
 * @n: change number of pointer
 * @index: index of the bit to set
 *
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
