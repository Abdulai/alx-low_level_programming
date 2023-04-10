#include "main.h"

/**
 * get_bit - this value returns a bit at and index in a decimal number
 * @n: this is the number to search
 * @index: this is the index of the bit
 *
 * Return: this returns the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}