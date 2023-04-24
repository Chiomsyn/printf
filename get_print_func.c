#include "main.h"
/**
 * get_print_func - selects the print function passed on arg.
 * @n: argument
 * @index: index of argument
 *
 * Return: pointer to a fuction.
 */

int (*get_print_func(const char *n, int index))(va_list, char*, unsigned int)
{
	print_t pt[] = {
		{"c", print_chr}, {NULL, NULL},
	};
	int i = 0;

	while (pt[i].sym)
	{
		if (n[index] == pt->sym[i])
			break;
		i++;
	}

	return (pt[i].f);

}
