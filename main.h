#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print_t - Struct for print functions
 *
 * @sym: The type argument
 * @f: The function that points to printer funtion
 *
 * Description: struct that stores pointer to printer function
 */
typedef struct print_t
{
	char *sym;
	int (*f)(int a, int b);
} type_print;

int _printf(const char *format, ...);
int print_stream(char *buf, unsigned int count);
int (*get_print_func(const char *n, int index))(va_list, char*, unsigned int)

#endif
