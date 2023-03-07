#include "main.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int z = 0, y, t = 0;

	while (accept[z])
	{
		y = 0;

		while (s[y] != 32)
		{
			if (accept[z] == s[y])
			{
				t++;
			}

			y++;
		}

		z++;
	}

	return (t);
}
