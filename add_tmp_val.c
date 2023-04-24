#include "main.h"

/**
 * add_tmp_val - concatenates the buffer characters
 * @tmp: buffer pointer
 * @c: charcter to concatenate
 * @count: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int add_tmp_val(char *tmp, char c, unsigned int count)
{
	if (count == 1024)
	{
		print_stream(tmp, count);
		count = 0;
	}
	tmp[count] = c;
	count++;
	return (count);
}
