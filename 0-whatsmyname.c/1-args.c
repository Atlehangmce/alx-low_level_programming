#include <stdio.h>
#include "main.h"
/**
* main - it print the number of arguments passed to the program
* @argc: the number of arguments
* @argv: the array of arguments
*
* Return: it is Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
