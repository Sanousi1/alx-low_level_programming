#include "main.h"
#include <stdio.h>
/**
* print_diagsums - this is the function of the task
*@a : the function prarmeter
*@size : the function prarmeter
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, s = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s = s + a[i];
		a = a + size;
	}
	a = a - size;
	for (i = 0; i < size; i++)
	{
		s2 = s2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", s, s2);
}
