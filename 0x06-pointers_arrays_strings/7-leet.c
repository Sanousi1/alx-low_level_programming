i#include "main.h"

/**
* leet - this is the function of the task
*@str : the function prarmeter
* Return: return result
*/
char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; c[j] != '\0'; j++)
			if (str[i] == c[j])
				str[i] = d[i];
	return (str);
}
