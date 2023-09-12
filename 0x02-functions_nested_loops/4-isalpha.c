#include "main.h"

/**
 * _isalpha - this is the function of the task
* @c : a variable to store the character
* Return: _isalpha will return 1 if character is lowercase, otherwise 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
