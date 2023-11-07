#include "main.h"

/**
* _isupper - this is the function of the task
*@c : the function prarmeter
* Return: 1 it it's uppercase, otherwise 0.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
