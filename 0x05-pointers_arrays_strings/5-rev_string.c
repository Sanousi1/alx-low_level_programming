#include "main.h"
#include <stdio.h>
/**
* rev_string - this is the function of the task
*@s : the function prarmeter
* Return : void
*/
void rev_string(char *s)
{
	int i = 0;
	int x = 0;
	int d;
	char z;

	while (s[i] != '\0')
	{
		i++;
		printf("%d\n", i);
	}
	d = i / 2;
	while (x < d)
	{
		z = s[x];
		s[x] = s[i - 1];
		s[i - 1] = z;
		i--;
		x++;
	}
}
