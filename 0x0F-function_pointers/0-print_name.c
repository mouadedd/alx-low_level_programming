#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name ny pointer to a function
 * @name: stringto putt
 * @f: pointer to the function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
