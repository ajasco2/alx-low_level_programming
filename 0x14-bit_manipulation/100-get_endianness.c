#include "main.h"

/**
 * get_endianness - Checks the  machine if it is little or big endianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *) &p;

	return (*c);
}

