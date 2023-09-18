#include "main.h"

/**
* _strlen - this is the function of the task
*@s : the function prarmeter
* Return: void
*/
int _strlen(char *s);
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
