#include "main.h"
#include <stddef.h>

/**
* *_strpbrk - this is the function of the task
*@s : the function prarmeter
*@accept : the function prarmeter
* Return: return result
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
