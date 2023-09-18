#include "main.h"

/**
* puts_half - this is the function of the task
*@str : the function prarmeter
* Return: void
*/
void puts_half(char *str)
{
	int i, n;
	int x = 0;

	for (i = 0; str[i] != '\0'; i++)
		x++;
	n = (x - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}


