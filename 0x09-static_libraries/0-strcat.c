#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
*
* Return: void
*/
char *_strcat(char *dest, char *src)
{
	int b;
	int k;

	b = 0;
	while (dest[b] != '\0')
	{

		b++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[k] = src[k];
		b++;
		k++;
	}
	dest[b] = '\0';
	return (dest);
}
