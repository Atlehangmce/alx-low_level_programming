#include "main.h"
/**
* _puts_recursion - the function like puts();
* @s: an input
* Return: it is  Always 0 (Success)
*/
void _puts_recursion(char *s)
{
	if (*s)
	{

		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
