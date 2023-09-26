#include "main.h"

/**
* _strspn - this is the function of the task
*@s : the function prarmeter
*@accept : the function prarmeter
* Return: return s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, m;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (m = 0; s[i] != accept[m]; m++)
		{
			if (accept[m] != '\0')
				return (i);
		}
	}
	return (0);
}
