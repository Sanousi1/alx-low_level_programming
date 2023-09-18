#include "main.h"

/**
* swap_int - this is the function of the task
*@a : the function prarmeter
*@b : the function prarmeter
* Return: void
*/
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
