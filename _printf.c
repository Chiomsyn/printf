#include "main.h"

/**
 * _printf - prints the formated output of given data.
 * @format: input of strings
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0, chr_count = 0;
	va_list ptr;
	char *tmp;
	int (*function)(va_list, char *, unsigned int);

	va_start(ptr, format);
	tmp = malloc(sizeof(char) * 1024);
	if (!format[i])
		return (0);
	if (!format || !tmp || (format[i] == '%' && !format[i + 1]))
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				add_tmp_val(tmp, format[i], count), chr_count++;
			else if (format[i + 1] == '\0')
			{
				free(tmp), print_stream(tmp, count), va_end(ptr);
				return (-1);
			}
			else
			{
				function = get_print_func(format[i + 1]);
				if (function == NULL)
				{
					add_tmp_val(tmp, format[i], count);
				chr_count++, i--;
				}
				else
					chr_count += function(ptr, tmp, count);
			}	i++;
		} else
			add_tmp_val(tmp, format[i], count), chr_count++;
		for (count = chr_count; count > 1024; count -= 1024)
			;
	}
	print_stream(tmp, count), free(tmp), va_end(ptr);
	return (chr_count);
}
