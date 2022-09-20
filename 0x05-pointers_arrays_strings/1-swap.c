#include "main.h"

#include <stdio.h>



/**
 * @a: pointer changing the value of variable a
 * @b:pointer changing the value of variable b
 * @c: pointer changing the value of c 
 * swap_int: function swaps he value of integers
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{

		int c = *a;
		*a = *b;
		*b = c;
}
