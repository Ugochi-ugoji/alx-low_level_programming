#include "main.h"
#include <stdio.h>

/**
 * @a: a pointer changing the value of variable a
 * @b: a pointer changing the value of variable b
 * @c: a pointer changing the value of c 
 * swap_int: a function that swaps he value of integers
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
