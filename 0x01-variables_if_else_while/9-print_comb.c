#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int no;

	for (no = 0; no <= 9; no++)
	{
		putchair((no % 10) + '0');

		if (no == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);

}
