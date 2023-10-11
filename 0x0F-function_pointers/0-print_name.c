#include <function_pointers.h>
#include <stdio.h>

/**
 * print_name - function
 * @name: string to add
 * @f: pointer to function
 * return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
