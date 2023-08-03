#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Unsigned long int number.
 *
 * Return: No return.
 */
void print_binary(unsigned long int n)
{
	int bit_position = sizeof(unsigned long int) * 8 - 1;
	int print_flag = 0;

	while (bit_position >= 0)
	{
		unsigned long int mask = 1UL << bit_position;
		char bit = (n & mask) ? '1' : '0';

		if (bit == '1')
			print_flag = 1;

		if (print_flag)
			_putchar(bit);

		bit_position--;
	}

	if (!print_flag)
		_putchar('0');
}

