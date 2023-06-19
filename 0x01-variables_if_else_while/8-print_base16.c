#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int no;
	char me;

	for (no = 0; no < 10; no++)
		putchar((no % 10) + '0');

	for (me = 'a'; me <= 'f'; me++)
		putchar(me);

	putchar('\n');

	return (0);
}
