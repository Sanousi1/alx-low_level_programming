#include "main.h"

/**
* print_diagonal - this is the function of the task
*@n : the function prarmeter
* Return: void
*/
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;
		
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
