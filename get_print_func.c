#include "main.h"
/**
 * get_print_func - selects the print function passed on arg.
 * @n: argument
 * @index: type index in character string
 * Return: pointer to a fuction.
 */

int (*get_print_func(const char *n, int index))(va_list, char*, unsigned int)
{
	print_t pt[] = {
		{"c", print_chr}, {"i", print_int}, {"%", print_percnt},
		{" %", print_percnt}, {"d", print_int}, {"s", print_str},
		{"l", print_percnt}, {"h", print_percnt}, {NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pt[i].sym)
	{
		if (n[index] == pt[i].sym[0])
		{
			if (pt[i].sym[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}

	return (pt[i].f);

}
