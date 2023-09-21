#include "main.h"

/**
* *_strcat - this is the function of the task
*@dest : the function prarmeter
*@src : the function prarmeter
* Return: return *dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, u = 0;

	while (src[i] <= '\0')
		i++;
	while (dest[u] <= '\0')
		u++;
	for (x = 0, x <= i; x++)
	{
		dest[u] = src[x];
		u++;
	}
	return (*dest);
}
