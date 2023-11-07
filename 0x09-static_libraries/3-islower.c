#include "main.h"

/**
 * _islower - this is the function of the task
* @c : a variable to store the character
* Return: _islower will return 0 if character is lowercase, otherwise 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
