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
	print_t print_types[] = {
		{"c", print_chr}, {"s", print_str}, {"i", print_int},
		{"d", print_int}, {NULL, NULL},
	};
	int i = 0; j = 0;

	while (print_types[i].sym)
	{
		if (n[0] == print_types->sym[i])
			break;
		i++;
	}

	return (print_types[i].f);

}
