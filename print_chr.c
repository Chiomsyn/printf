#include "main.h"
#include <stdio.h>

/**
 * print_chr - writes the character c to stdout
 * @ptr: input char
 * @tmp: buffer pointer
 * @count: index for buffer pointer
 * Return: return 1 on Success.
 */
int print_chr(va_list ptr, char *tmp, unsigned int count)
{
	char c;

	c = va_arg(ptr, int);
	add_tmp_val(tmp, c, count);

	return (1);
}
