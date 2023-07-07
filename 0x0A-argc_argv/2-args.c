#include <stdio.h>
#include "main.h"
/**
* main - it prints all arguments it receives
* @argc: the number of arguments
* @argv: an array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}
