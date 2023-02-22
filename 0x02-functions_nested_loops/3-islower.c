#include "main.h"
/**
* _islower - Shows 1 if the input is a
* lowercase character. Another cases, shows 0
*
*
* Return: 1 for lowercase. 0 for the rest.
*/
int _islower(int c)
{
	/**
	* _islower does the job
	*
	*/
	if (c >= 'a' && c <='z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
