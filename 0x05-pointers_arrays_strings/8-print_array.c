#include "main.h"

/**
* print_array - this is the function of the task
*@a : the function prarmeter
*@n : the function prarmeter
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i < n - 1)
			prinf(", ");
	}
	_putchar('\n');
}
