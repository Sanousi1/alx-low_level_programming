#include "main.h"

/**
 * print_sign - this is the function of the task
* @n : a variable to store the number
* Return: return 1 if is greater than zero, -1 is less than zero, otherwise 0
*/
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
	return (0);
}
}
