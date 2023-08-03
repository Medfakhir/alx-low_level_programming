#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0.
 * @n: Pointer to the number to change.
 * @index: Index of the bit to clear (0-based).
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a mask with 1 at the specified index and all other bits as 0 */
	mask = 1UL << index;

	/* Use bitwise NOT to create a mask with 1 at the index and all other bits as 1 */
	mask = ~mask;

	/* Use bitwise AND to clear the bit at the index in the number */
	*n = (*n & mask);

	return (1);
}

