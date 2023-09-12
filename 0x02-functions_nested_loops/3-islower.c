#include "main.h"

/**
* _islower() - this is the function of the task
* Return 1 if chracter is lowercase, 0 otherwise
*/
int _islower(char c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
