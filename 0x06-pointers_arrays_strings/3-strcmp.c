#include "main.h"

/**
* _strcmp - this is the function of the task
*@s1 : the function prarmeter
*@s2 : the function prarmeter
* Return: return result
*/
int _strcmp(char *s1, char *s2)
{
	int i, z = 0;

	for (i = 0; s1[i] != '\0' && z == 0; i++)
			z = s1[i] - s2[i];
	return (z);
