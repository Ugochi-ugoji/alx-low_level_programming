#include "main.h"
#include <stdio.h>

/**
 * swap_int - this function swaps the value of two integers
 * @a: a pointer dereference changing the value of variable a
 * @b: a pointer dereferenece for changing the value of variable b
 * int c: assigning the address of the variable a to c
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
