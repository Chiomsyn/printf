#include "main.h"

/**
 * _printf - prints the formated output of given data.
 * @format: input of strings
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list ptr;
	char *tmp;

	va_start(ptr, format);
	tmp = malloc(sizeof(char) * 1024);
	if (!format[i])
		return (0);
	while (i >= 0)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				free(tmp), print_stream(tmp, count), va_end(ptr);
				return (-1);
			}
			else
			{
			}
		}
	}
}
