#include "main.h"

/**
* _isdigit - this is the function of the task
*@c : the function prarmeter
* Return: 1 it it's uppercase, otherwise 0.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
