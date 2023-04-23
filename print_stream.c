#include "main.h"

/**
 * print_stream - writes to file descriptor
 * @buf: buffer pointer
 * @count: number of bytes to print
 *
 * Return: number of bytes printed.
 */

int print_stream(char *buf, unsigned int count)
{
	return (write(1, buf, count));
}
