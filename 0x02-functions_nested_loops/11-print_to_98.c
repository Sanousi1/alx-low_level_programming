#include "main.h"
#include <stdio.h>

/**
* print_to_98 - this is the function of the task
* @n : variable
* Return: void
*/
void print_to_98(int n)
{

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("\n");
}
