#include "main.h"

/**
 * swap_int - swaps the valuses of two integers a and b
 *@a: A pointer to an int that will be updated
 *@b: B pointer to an int that will be updated
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
