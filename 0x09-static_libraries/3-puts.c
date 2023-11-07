#include "main.h"

/**
* _puts - this is the function of the task
*@str : the function prarmeter
* Return: void
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
