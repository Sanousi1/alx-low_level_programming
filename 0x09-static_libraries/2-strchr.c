#include "main.h"
#include <stddef.h>

/**
* *_strchr - this is the function of the task
*@s : the function prarmeter
*@c : the function prarmeter
* Return: return result
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
