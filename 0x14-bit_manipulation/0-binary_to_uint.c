#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The binary number represented as a string.
 *
 * Return: The converted unsigned int number, or 0 if invalid input or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, base_two;

	/* Check if b is NULL */
	if (!b)
		return (0);

	result = 0;
	base_two = 1;

	/* Calculate the length of the binary string */
	for (len = 0; b[len] != '\0'; len++)
		;

	/* Process the binary string from right to left */
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		/* Check if the character is either '0' or '1' */
		if (b[len] != '0' && b[len] != '1')
		{
			return (0); /* Invalid input, return 0 */
		}

		/* Add the current bit to the result using bitwise OR */
		if (b[len] == '1')
		{
			result |= base_two;
		}
	}

	return (result);
}

