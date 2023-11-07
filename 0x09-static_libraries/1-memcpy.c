#include "main.h"

/**
* *_memcpy - this is the function of the task
*@dest : the function prarmeter
*@src : the function prarmeter
*@n : the function prarmeter
* Return: return dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
