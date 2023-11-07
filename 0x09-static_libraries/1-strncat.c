#include "main.h"

/**
* *_strncat - this is the function of the task
*@dest : the function prarmeter
*@src : the function prarmeter
*@n : the function prarmeter
* Return: return dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int u = 0, i;

	while (dest[u] != '\0')
		u++;
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[u] = src[i];
		u++;
	}
	return (dest);
}
