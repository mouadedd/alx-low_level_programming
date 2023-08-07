#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - choose adequat function
 * @s: The operator
 * Return: A pointer to the adequat function
 */
int (*get_op_func(char *s))(int, int)
{
int h = 0;

op_t ops[] = {{"+", op_add}, {"-", op_sub},
		{"*", op_mul}, {"/", op_div},
		{"%", op_mod}, {NULL, NULL},};
	while (*(ops[h].op) != *s && ops[h].op != NULL)
	h++;
	return (ops[h].f);
}
