#include "main.h"

/**
 * _abs - this is the function of the task
* @c : a variable to store the number
* Return: return absolute value of an integer
*/
int _abs(int c)
{
if (c < 0)
{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
}
	return (c);
}
