#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}
	putchar('\n');

	return (0);
}
