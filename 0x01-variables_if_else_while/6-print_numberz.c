#include <stdio.h>
/**
 * main - Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int c;

	c = 0;
	while
		(c < 10) {
			putchar(c + '0');
			c++;
		}
	putchar('\n');
	return (0);
}
