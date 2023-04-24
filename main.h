#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print_type - Struct for print functions
 *
 * @sym: The type argument
 * @f: The function that points to printer function
 *
 * Description: struct that stores pointer to printer function
 */
typedef struct print_type
{
	char *sym;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_stream(char *buf, unsigned int count);
int (*get_print_func(char n))(va_list, char*, unsigned int);
int print_chr(va_list ptr, char *tmp, unsigned int count);
int print_str(va_list ptr, char *tmp, unsigned int count);
unsigned int add_tmp_val(char *tmp, char c, unsigned int count);
int print_int(va_list ptr, char *tmp, unsigned int count);

#endif
