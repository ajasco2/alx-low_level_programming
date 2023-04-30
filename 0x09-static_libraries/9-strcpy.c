#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int c = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; c < a ; c++)
	{
		dest[c] = src[c];
	}
	dest[a] = '\0';
	return (dest);
}
