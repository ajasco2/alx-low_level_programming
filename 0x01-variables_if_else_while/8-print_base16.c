#include <stdio.h>
/**
 * main - Prints all the numbers to base 16 in lowercase
 *
 */

int main(void)
{
	char c;

	int d;

	c = 'a';
	d = 0;
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
				c++;
		}
	putchar('\n');
	return (0);
}
