#include <stdio.h>
#ifndef FILENAME
#define FILENAME __FILE__
#endif

/**
 *  main - Entry point
 *
 *  Return: 0 on success
 */

int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}
