#include "main.h"
/**
* _strchr - the Entry point
* @s: the input
* @c: the input
* Return: Always 0 at (Success)
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
