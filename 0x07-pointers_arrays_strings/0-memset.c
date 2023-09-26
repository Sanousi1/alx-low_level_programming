#include "main.h"

/**
* *_memset - this is the function of the task
*@s : the function prarmeter
*@b : the function prarmeter
*@n : the function prarmeter
* Return: return s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
