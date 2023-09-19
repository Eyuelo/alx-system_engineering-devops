#include "main.h"
/**
 * swap integer - swaps the values of two integers
 * @a: int to swap
 * @b: int to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
