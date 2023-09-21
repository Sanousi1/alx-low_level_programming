#include "main.h"

/**
* rot13 - this is the function of the task
*@str : the function prarmeter
* Return: return result
*/
char *rot13(char *str)
{
	int i, j;
	char c[] = "ABCDEFGHIJKLMNOPQRSEUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSEUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; c[j] != '\0'; j++)
			if (str[i] == c[j])
			{
				str[i] = d[j];
				break;
			}
	return (str);
}
