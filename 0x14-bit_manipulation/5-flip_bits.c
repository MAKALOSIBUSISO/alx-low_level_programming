#include "main.h"
#include <stdio.h>

/**
 * flip_bits - to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			j++;
		result <<= 1;
	}

	return (j);
}
