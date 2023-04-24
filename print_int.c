#include "main.h"

/**
 * print_int - prints an integer
 * @ptr: input string
 * @tmp: buffer pointer
 * @count: index for buffer pointer
 * Return: number of chars printed.
 */
int print_int(va_list ptr, char *tmp, unsigned int count)
{
	int int_input;
	unsigned int int_in, int_temp, i, div, isneg;

	int_input = va_arg(ptr, int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		count = add_tmp_val(tmp, '-', count);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}

	int_temp = int_in;
	div = 1;

	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++)
	{
		count = add_tmp_val(tmp, ((int_in / div) % 10) + '0', count);
	}
	return (i + isneg);
}
