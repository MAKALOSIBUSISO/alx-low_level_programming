#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little or small
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
