#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - sum of a and b
  * @a: int a
  * @b: int b
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - diff of a and b
  * @a: int a
  * @b: int b
  *
  * Return: diff of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - product of a and b
  * @a: int a
  * @b: int b
  *
  * Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division of a and b
  * @a: int a
  * @b: int b
  *
  * Return: division of a and b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - remainder of div of a and b
  * @a: int a
  * @b: int b
  *
  * Return: remainder of div of a and b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
