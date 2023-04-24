#include "main.h"
/**
 * print_str - writes the string to stdout
 * @ptr: input string
 * @tmp: buffer pointer
 * @count: index for buffer pointer
 * Return: return 1 on success.
 */
int print_str(va_list ptr, char *tmp, unsigned int count)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(ptr, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			count = add_tmp_val(tmp, nill[i], count);
		return (5);
	}
	for (i = 0; str[i]; i++)
		count = add_tmp_val(tmp, str[i], count);
	return (i);
}
