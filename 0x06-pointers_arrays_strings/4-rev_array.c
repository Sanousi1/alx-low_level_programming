#include "main.h"

/**
* reverse_array - this is the function of the task
*@a : the function prarmeter
*@a : the function prarmeter
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i, z;

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		z = a[i];
		a[i] = a[n];
		a[n] = z;
		n--;
	}
}
