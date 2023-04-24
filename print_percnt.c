#include "main.h"
#include <stdio.h>
/**
 * print_percnt - writes the character c to stdout
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 */
int print_percnt(va_list a __attribute__((unused)), char *tmp, unsigned int i)
{
	add_tmp_val(tmp, '%', i);

	return (1);
}
