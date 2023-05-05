#include "main.h"

/**
 * flip_bits - counts the number of bits to change, to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	difference = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) *8); i++)
	{
		if (result == (difference & result)) j++;
		result <<= 1;
	}
	return (j);
}
