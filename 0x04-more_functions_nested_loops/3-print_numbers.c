#include "main.h"

/**
* print_numbers - this is the function of the task
*@i : the function prarmeter
* Return: void
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}