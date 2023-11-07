#include "main.h"

/**
* *_strncpy - this is the function of the task
*@dest : the function prarmeter
*@src : the function prarmeter
*@n : the function prarmeter
* Return: return dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
