#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	char me;

	for (me = 'z'; me >= 'a'; me--)
		putchar(me);

	putchar('\n');

	return (0);

}
